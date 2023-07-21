#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

void reverse(Node** head) {
    if (*head == NULL)
        return;

    Node* current = *head;
    Node* prev = NULL;
    Node* next = NULL;

    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != *head);

    (*head)->next = prev;
    *head = prev;
}

void display(Node* head) {
    if (head == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    Node* head = NULL;

    // Inserting elements into the circular linked list
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);

    printf("Original circular linked list: ");
    display(head);

    // Reversing the circular linked list
    reverse(&head);

    printf("Reversed circular linked list: ");
    display(head);

    return 0;
}
