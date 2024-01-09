// creating and traversing dll from l to r & r to l :->
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

void rt_traversal(struct node* ptr)
{
    struct node* tmp = ptr;
    while(tmp!= NULL)
    {
        printf("%d ",tmp->data );
        tmp =  tmp->next;
    }

}
void lt_traversal(struct node* ptr)
{
    struct node* tmp = ptr;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }
    while(tmp != NULL)
    {
        printf("%d ",tmp->data);
        tmp = tmp->prev;
    }
}
int main()
{
    struct node* head = malloc(sizeof(struct node));
    struct node* sec = malloc(sizeof(struct node));
    struct node* third = malloc(sizeof(struct node));
    head->data = 12;
    head->prev = NULL;
    head->next= sec;
    sec->prev = head;
    sec->data  = 89;
    sec->next = third;
    third->data = 78;
    third->prev = sec;
    third->next = NULL;
    rt_traversal(head);
    lt_traversal(head)

}