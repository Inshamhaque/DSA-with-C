#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* creation(int data)
{
    struct node* tmp = malloc(sizeof(struct node));
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
}
int main()
{
    struct node* p = malloc(sizeof(struct node));
    p = creation(12);
    struct node* p1 = malloc(sizeof(struct node));
    struct node* p2 = malloc(sizeof(struct node));
    p1 = creation(14);
    p2 = creation(20);
    p->left = p1;
    p->right = p2;
    printf("    %d\n%d\t%d",p->data,p->left->data,p->right->data);
    
     
    return 0;
}