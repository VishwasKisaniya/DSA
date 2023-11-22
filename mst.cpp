// C++ program for Prim's algorithm to find the minimal spanning tree
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Number of vertices in the graph
#define V 4

// Function to find the vertex with the minimum key value
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

// Function to print the constructed MST stored in parent[]
void printMST(int parent[], int graph[V][V])
{
    cout << "Edges of the Minimal Spanning Tree using Prim's Algorithm:\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " -- " << i << " : " << graph[i][parent[i]] << endl;
}

// Function to implement Prim's algorithm
void primMST(int graph[V][V])
{
    int parent[V]; // Array to store constructed MST
    int key[V]; // Key values used to pick minimum weight edge in cut
    bool mstSet[V]; // To represent set of vertices not yet included in MST

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    // Always include the first vertex in MST
    key[0] = 0; // Make key 0 so that this vertex is picked as first vertex
    parent[0] = -1; // First node is always root of MST

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum key vertex from the set of vertices not yet included in MST
        int u = minKey(key, mstSet);

        // Add the picked vertex to the MST set
        mstSet[u] = true;

        // Update key value and parent index of the adjacent vertices of the picked vertex
        // Consider only those vertices which are not yet included in MST
        for (int v = 0; v < V; v++)

            // graph[u][v] is non-zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    // Print the edges of the MST
    printMST(parent, graph);
}

// Driver code
int main()
{
    int graph[V][V] = { { 0, 10, 6, 5 },
                        { 10, 0, 0, 15 },
                        { 6, 0, 0, 4 },
                        { 5, 15, 4, 0 } };

    primMST(graph);

    return 0;
}
