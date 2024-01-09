#include <stdio.h>
#include <stdlib.h>
// creation and traversal in a linked list

struct node
{
    int data;
    // self referring
    struct node *next;
};
struct  node * delete(struct node* ptr)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(ptr->next==NULL)
    {
        printf("it is empty list");
    }
    else
    {
        temp = ptr;
        free(temp);
        ptr = ptr->next;j
        temp  = NULL;
    }
    return ptr;
}

/*void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}*/
struct node* add_at_end(struct node* ptr, int data)
{
    struct node* end = (struct node*)malloc(sizeof(struct node));
    end->data = data;
    ptr->next = end;
    end->next  = NULL;
    return end;
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 78;
    head->next = NULL;
    struct node* ptr = head;
    ptr = add_at_end(ptr,12);
    ptr = add_at_end(ptr,33);
    ptr = add_at_end(ptr,98);
    head = delete(head);
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr= ptr->next;
    }
    return 0;
}
