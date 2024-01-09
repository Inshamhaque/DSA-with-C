#include <stdio.h>
#include <stdlib.h>
// creation and traversal in a linked list

struct node
{
    int data;
    // self referring
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    //memory allocation in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // linkiing of first and second
    head->data = 7;
    head->next = second;
    // linking of second and third
    second->data = 11;
    second->next = third;
    // terminatioin of third
    third->data = 15;
    third->next = NULL; 
    traversal(head);
    return 0;
}