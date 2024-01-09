#include<stdio.h>
#include<stdlib.h>
// there are four types of insertion
struct node
{
    int data;
    struct node *next; 
};
void traversal(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d\t",(ptr->data));
        ptr = ptr->next;
    }
}
struct node * insertatfirst(struct node *ptr, int data)
{
    struct node *add = (struct node*) malloc(sizeof(struct node));
    add->data = data;
    add->next = ptr;
    return add; //this add is now the new head
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
    // linking of first and second
    head->data = 7;
    head->next = second;
    // linking of second and third
    second->data = 11;
    second->next = third;
    // terminatioin of third
    third->data = 15;
    third->next = NULL; 
    head = insertatfirst(head,56);
    traversal(head);
    return 0;
    
}