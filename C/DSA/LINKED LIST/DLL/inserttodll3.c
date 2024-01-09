// insertion at a certain position
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* addatend(struct node* ptr, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    struct node* tp = ptr;
    while(tp->next != NULL)
    {
        tp = tp->next;
    }
    temp->data = data;
    ptr->next = temp;
    temp->next = NULL;
    return ptr;
}
struct node* addempty(struct node* ptr, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
}
struct node* addatpos(struct node* ptr, int data, int pos)
{
    struct node* temp = malloc(sizeof(struct node));
    temp  = addempty(temp,data);
    struct node* ptr1 = ptr;
    struct node* ptr2 = NULL;
    while(pos!=1)
    {
        ptr1 = ptr1->next;
        pos--;
        if(ptr1->next==NULL)
        {
            temp->next = NULL;
            ptr1->next = temp;
            temp->prev = ptr1;
        }
        else
        {
            ptr2 = ptr1->next;
            ptr2->prev = temp;
            ptr1->next = temp;
            temp->next = ptr2;
            temp->prev = ptr1;
            
        }
        return ptr;
    }
}
int main()
{
    struct node* head = NULL;
    head = addempty(head,34); 
    head = addatend(head,89);
    head = addatend(head,9);
    head = addatpos(head,65,1);
    struct node* ptr = head;
    while(ptr!= NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}