//Creation of CLL
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
    new->next = ptr;
    return ptr;
}
void traversal(struct node* ptr){
    struct node* tmp = ptr;
    while(tmp->next!=ptr)
    {
        printf("%d",tmp->data);
        tmp = tmp->next;
    }
    tmp = tmp->next;
    printf("%d",tmp->data);
}
int main()
{
    struct node* head = malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;
    head = insertatend(head,2);
    head = insertatend(head,3);
    head = insertatend(head,4);
    printf("The linked list is : \n");
    traversal(head);

}