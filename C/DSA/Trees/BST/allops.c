//Insertion, Deletion and Searching 
#include<stdio.h>
#include<stdlib.h>
struct bst{
    int info;
    struct bst* left;
    struct bst* right;
};
void insertion(struct bst* ptr, int data);
void traversal(struct bst* ptr) 
{
    struct bst* tmp = ptr;
    if(ptr==NULL)
    {
        return;
    }
    traversal(ptr->left);
    printf("%d",ptr->info);
    traversal(ptr->right);
}
void deletion();
void searching();
int main()
{
    struct bst* root = malloc(sizeof(struct bst));
    root->info = 50;
    root->left->info = 40;
    root->right->info = 60;
    root->left->left->info = 20;
    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right->info = 45;
    root->left->right->left = NULL;
    root->left->right->right = NULL;
    root->right->left->info = 55;
    root->right->left->right = NULL;
    root->right->left->left = NULL;
    traversal(root);
/*      50
       /  \  
      40   60
     / \   / \ 
   20  45 55 


*/
    return 0;
}