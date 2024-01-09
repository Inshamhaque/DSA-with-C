#include<stdio.h>
#include<stdlib.h>
#define Max_size 100
struct node
{
    int data;
    struct node* next;
};
struct node* createnode(int value)
{
    struct node* New = malloc(sizeof(struct node));
    if(New==NULL)//handling node creation failure 
    {
        return NULL;
    }
    New->data = value;
    New->next = NULL;
    return New;
}
void insert(int value, int index, struct node* ptr[Max_size])
{
    if(index>Max_size||index<0)//handling index out of range
    {
        return;
    }
    struct node* newnode = createnode(value);
    if(newnode == NULL)//handling node creation failure 
    {
        return;
    }
    if(ptr[index] == NULL) //if no element at that position or insert at end condition
    {
        ptr[index] = newnode;
    }
    else//
    {
        struct node* current =  ptr[index-1];
        while(current->next!=NULL)
        {
            current = current->next;
        }
        current -> next= newnode ;
    }
    newnode->next = NULL;
}
void display(struct node* ptr)
{
    struct node* tmp = ptr;
    while(tmp!=NULL)
    {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
}
int main()
{
    struct node* array[Max_size] = {NULL};
    insert(11,0,array);
    insert(12,1,array);
    insert(13,2,array);
    insert(14,3,array);
    insert(15,2,array);
    //insert(16,0,array); problem -> insertion at 0 not working
    insert(17,5,array);
    for(int i=0;i<Max_size;i++)
    {
        if(array[i]!=NULL)
        {
            display(array[i]);
        }
    }


    return 0;
}