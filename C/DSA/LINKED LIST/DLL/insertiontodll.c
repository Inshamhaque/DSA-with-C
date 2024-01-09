// insertion in beginning of doubly inked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* add(struct node*ptr, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = ptr;
    temp->prev = NULL;
    ptr = temp;
    return ptr;
}
int main()
{
    struct node* head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 67;
    head->next = NULL;
    head = add(head,56);
    struct node* ptr= head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }


    return 0;
}