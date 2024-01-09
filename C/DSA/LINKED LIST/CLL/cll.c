#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* insertAtEnd(struct node* ptr, int data) {
    struct node* tmp = ptr;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (ptr == NULL) {
        new_node->next = new_node;
        ptr = new_node;
    } else {
        while (tmp->next != ptr) {
            tmp = tmp->next;
        }
        tmp->next = new_node;
        new_node->next = ptr;
    }

    return ptr;
}

void traversal(struct node* ptr) {
    if (ptr == NULL) {
        printf("Circular Linked List is empty.\n");
        return;
    }

    struct node* tmp = ptr;
    do {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    } while (tmp != ptr);
}

int main() {
    struct node* head = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);

    printf("The circular linked list is: ");
    traversal(head);

    return 0;
}
