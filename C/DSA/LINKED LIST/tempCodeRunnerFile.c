//creation of cll
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* insertatend(struct node* ptr, int data)
{
    struct node* tmp  = ptr;
    struct node* new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
    return ptr;
}
int main()
{
    struct node* head = malloc(sizeof(struct node));
    head->data = 12;
    head = insertatend(head,15);
    head = insertatend(head,78);
    struct node* ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = head;
    struct node* tmp = head;
    while(tmp->next != head)
    {
        printf("%d ",tmp->data);
        tmp  = tmp->next;
    }
    printf("%d ",tmp->data);

}