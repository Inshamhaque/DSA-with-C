//ALL TYPES OF TRAVERSALS
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int info)
{
    struct node* tmp = malloc(sizeof(struct node));
    tmp->data = info;
    tmp->left = NULL;
    tmp->right = NULL; 
}
void preorder(struct node* ptr)
{
    if(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);

    }
}
void postorder(struct node* ptr)
{
    if(ptr != NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ",ptr->data);
    }
}
void inorder(struct node* ptr)
{
    if(ptr!= NULL)
    {
        inorder(ptr->left);
        printf("%d ",ptr->data);
        inorder(ptr->right);
    }
}
int main()
{
    struct node* p = malloc(sizeof(struct node));
    p = create(12);
    struct node* p1 = malloc(sizeof(struct node));
    struct node* p2 = malloc(sizeof(struct node));
    p1 = create(13);
    p2 = create(14);
    p->left = p1;
    p->right = p2;
    struct node* p3 = malloc(sizeof(struct node));
    struct node* p4 = malloc(sizeof(struct node));
    p3 = create(15);
    p4 = create(16);
    p1->left = p3;
    p1->right = p4;
    struct node* p5 = malloc(sizeof(struct node));
    p5 = create(17);
    p2->left = p5;
    /*    12    
         /  \
        13  14
        / \   \
       15 16  17  */ 
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    return 0;
}