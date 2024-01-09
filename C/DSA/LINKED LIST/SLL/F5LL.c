// deleting complete Link list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* add_at_end(struct node* ptr, int data)
{
    struct node* end = (struct node*)malloc(sizeof(struct node));
    end->data = data;
    ptr->next = end;
    end->next  = NULL;
    return end;
} 
struct node* delete(struct node* ptr)
{
    struct node* temp = ptr;
    while(temp!=NULL)
    {
        temp = temp->next;
        free(ptr);
        ptr = temp;
        
    }
    return ptr;


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
    head = delete(head);
    ptr = head;
    if(head == NULL)
    {
        printf("it is deleted");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }

    }
    
    return 0;
}
    
