// to delete any node at nth position starting from 1 ;->
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void traversal(struct node* ptr)
{
    struct node* tmp = ptr;
    do
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }while(tmp!=ptr);
}
struct node* delete(struct node* ptr, int pos)
{
    struct node* tmp1 = ptr;
    struct node* tmp2 ;
    if(pos==1)
    {
        while(tmp1->next!=ptr)
        {
            tmp1= tmp1->next;
        }
        tmp1->next = ptr->next;
        ptr = ptr->next;
        return ptr;
    }
    else
    {
        pos--;
        while(pos!=1)
        {
            tmp1= tmp1->next;
            pos--;
        }
        tmp2 = tmp1->next;
        tmp1 ->next = tmp2->next;
        tmp2 = NULL;
        return ptr;
    }

}
int main()
{
    struct node* head = malloc(sizeof(struct node));
    struct  node* second = malloc(sizeof(struct node));
    struct node* third = malloc(sizeof(struct node));
    struct node* four = malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data  = 11;
    second->next  = third;
    third->data  = 12;
    third->next = four;
    four->data = 89;
    four->next = head;
    head = delete(head,4);
    traversal(head);

}