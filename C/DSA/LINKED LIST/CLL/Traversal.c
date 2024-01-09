#include<stdio.h>
#include<stdlib.h>
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
    }while(ptr!=head);
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

}