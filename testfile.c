#include <stdio.h>
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;


int main() {
    // Create a sample doubly linked list
    Node* node1 = (Node*)malloc(sizeof(Node));
    Node* node2 = (Node*)malloc(sizeof(Node));
    Node* node3 = (Node*)malloc(sizeof(Node));

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    node1->prev = NULL;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = NULL;

    // Print the doubly linked list in reverse order
    printDoublyLinkedListReverse(node3);

    // Clean up memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}