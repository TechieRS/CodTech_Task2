
#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the list
void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (*head == NULL) { // If list is empty, make newNode the head
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) { // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Node inserted: %d\n", value);
}

// Function to delete a node with a given value
void deleteNode(struct Node** head, int value) {
    struct Node* temp = *head, *prev = NULL;
    
    if (temp != NULL && temp->data == value) { // If head node holds the value
        *head = temp->next;
        free(temp);
        printf("Node deleted: %d\n", value);
        return;
    }
    
    while (temp != NULL && temp->data != value) { // Search for the node to delete
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) { // Value not found
        printf("Value not found in the list!\n");
        return;
    }
    
    prev->next = temp->next;
    free(temp);
    printf("Node deleted: %d\n", value);
}

// Function to display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value;
    
    while (1) {
        printf("\nSingly Linked List Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertNode(&head, value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice, try again!\n");
        }
    }
    return 0;
}
