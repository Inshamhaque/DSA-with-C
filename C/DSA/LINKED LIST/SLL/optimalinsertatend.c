#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void add_at_end(struct node* ptr, int data)
{
    struct node *end;
    end = (struct node*)malloc(sizeof(struct node));
    end->data = data;
    end->next = NULL;
    ptr->next = end;
    return;
}

void traversal(struct node *pit)
{
    while(pit!= NULL)
    {
        printf("%d\t",pit->data);
        pit = pit->next;
    }
}
int main()
{
    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 12;
    head->next = NULL;
    struct node* ptr = head;
    add_at_end(ptr,67);
     add_at_end(ptr,76);
    traversal(head);
    

    return 0;
}