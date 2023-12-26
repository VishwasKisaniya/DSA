#include <iostream>

using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = *head;

    if (*head != nullptr) {
        (*head)->prev = newNode;
    }

    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        newNode->prev = nullptr;
        *head = newNode;
        return;
    }

    Node* lastNode = *head;
    while (lastNode->next != nullptr) {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;
    newNode->prev = lastNode;
}

// Function to delete a node from the list
void deleteNode(Node** head, Node* delNode) {
    if (*head == nullptr || delNode == nullptr) {
        return;
    }

    if (*head == delNode) {
        *head = delNode->next;
    }

    if (delNode->next != nullptr) {
        delNode->next->prev = delNode->prev;
    }

    if (delNode->prev != nullptr) {
        delNode->prev->next = delNode->next;
    }

    delete delNode;
}

// Function to traverse and print the list
void printList(Node* head) {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        cout << currentNode->data << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert nodes at the beginning
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Print the list
    cout << "List after inserting nodes at the beginning: ";
    printList(head);

    // Insert nodes at the end
    insertAtEnd(&head, 5);
    insertAtEnd(&head, 6);
    insertAtEnd(&head, 7);
    insertAtEnd(&head, 8);

    // Print the list
    cout << "List after inserting nodes at the end: ";
    printList(head);

    // Delete a node
    deleteNode(&head, head->next->next);

    // Print the list
    cout << "List after deleting a node: ";
    printList(head);

    return 0;
}
