#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    // self referring
    struct node *next;
};
struct node* add_at_end(struct node* ptr, int data)
{
    struct node* end = (struct node*)malloc(sizeof(struct node));
    end->data = data;
    ptr->next = end;
    end->next  = NULL;
    return end;
}

struct ndoe*del_last(struct node* ptr)
{
    if(ptr==NULL)
    {
        printf("no element");
    }
    else if(ptr->next = NULL)
    {
        free(ptr);
        ptr = NULL;
    }
    else
    {
        struct node* temp  = ptr;
        struct node* temp2 = ptr;
        while(temp->link!=NULL)
        {
            temp2 = temp;
            temp  = temp->link;
        }
        free(temp);
        temp = NULL;
    }
    return ptr;
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
    head = del_last(head);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    return 0;

}

