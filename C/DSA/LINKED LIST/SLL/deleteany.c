
// Generalised deletion in a linked list ;-)
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
struct node* deleteany(struct node* ptr, int pos)
{
    if(ptr==NULL)
    {
        printf("empty");
    }
    else if(pos==1)
    {
        struct node* temp = ptr;
        ptr = ptr->next;
        free(temp);
        temp = NULL;
        return ptr;
    }
    else
    {
        struct node* ptr1 = ptr;
        struct node* ptr2 = ptr;
        while (pos!=1)
        {
            ptr1 = ptr2;
            ptr2 = ptr2->next;
            pos--;
        }
        ptr1->next = ptr2->next;
        free(ptr2);
    }
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;
    struct node* ptr = head;
    ptr = add_at_end(ptr,98);
    ptr = add_at_end(ptr,3);
    ptr = add_at_end(ptr,36);
    head = deleteany(head,3);
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    return 0;

}