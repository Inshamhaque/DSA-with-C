#include<stdio.h>
#include<stdlib.h>
// insert at any position
struct node
{
    int data;
    struct node* next;
};
void insert(struct node* ptr1, int data, int pos)
{
    struct node* add = (struct node*)malloc(sizeof(struct node));
    add->data = data;
    add->next = NULL;
    pos--;
    while(pos!=1)
    {
        ptr1 = ptr1->next;
        pos--;
    }
    add->next = ptr1->next;
    ptr1->next = add;
}
struct node* insert_at_end(struct node *ptr, int data)
{
    struct node* end = (struct node*)malloc(sizeof(struct node));
    end->data = data;
    end->next = NULL;
    ptr->next = end;
    return end;
}
void traversal(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data  = 12;
    head->next = NULL;
    struct node* ptr = head;
    ptr = insert_at_end(ptr, 34);
    ptr = insert_at_end(ptr, 56);
    struct node* ptr1 = head;
    insert(ptr1, 76, 1);
    
    traversal(head);
    return 0;
}