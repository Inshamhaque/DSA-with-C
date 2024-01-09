#include<stdio.h>
#include<stdlib.h>
// program for inserion at beginning and traversal of a circular linkl list
struct node
{
    int data;
    struct node* next;
};
void traversal(struct node* ptr)
{
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr->next!=head);
}
struct node* insertatstart(struct node* ptr, int data)
{
    struct node* tmp = malloc(sizeof(struct node));
    tmp->data = data;
    tmp->next = NULL;
    struct node* ptr1 = head;
    while(ptr1->next != ptr)
    {
        ptr1 = ptr1->next;
    }
    ptr1->next =  tmp;
    tmp-> next = ptr;
    ptr = tmp;
    return ptr;
}
int main()
{
    struct node* head = malloc(sizeof(struct node));
    struct  node* second = malloc(sizeof(struct node));
    struct node* third = malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data  = 11;
    second->next  = third;
    third->data  = 12;
    third->next = head;
    traversal(head);
    head = insertatstart(head, 34);
    head = insertatstart(head, 35);
    head = insertatstart(head, 36);
    traversal(head);

}