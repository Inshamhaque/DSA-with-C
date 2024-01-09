// insertoin at end in dll
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
void addend(struct node* ptr, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    struct node* tp = ptr;
    while(tp->next!=NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev= tp;

}

int main()
{
    struct node* head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 67;
    struct node* sec= malloc(sizeof(struct node));
    sec->data = 89;
    sec->next = NULL;
    sec->prev = head;
    head->next  = sec;
    addend(head, 78);
    struct node* ptr = head;
    while(ptr!= NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

    return 0;
}