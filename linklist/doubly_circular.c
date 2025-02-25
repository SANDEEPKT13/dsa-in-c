#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to traverse the list in forward direction
void traverseForward(struct Node* head) {
    struct Node* temp = head;
    printf("Traversing in forward direction:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to traverse the list in backward direction
void traverseBackward(struct Node* tail) {
    struct Node* temp = tail;
    printf("Traversing in backward direction:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

// Utility function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Creating individual nodes
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);
    struct Node* tail = createNode(4);

    // Linking nodes together
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = tail;
    tail->prev = third;

    // Traverse the list in forward and backward directions
    traverseForward(head);
    traverseBackward(tail);

    return 0;
}
