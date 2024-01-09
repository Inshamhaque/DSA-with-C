// Reverse a linked list using double pointer method 
#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    struct node* next;
};
struct node* push(node* ptr, int data){
    node* temp = new node();
    temp->data=data;
    temp->next = nullptr;
    struct node* tmp  = ptr;
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    tmp->next = temp;
    return ptr;
}
void traversal(node* ptr){
    struct node* tmp = ptr;
    while(tmp!=nullptr){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<"\n";
}
node* reverse(node* ptr){
    node* current = ptr;
    node* prev = nullptr;
    node* next = nullptr;
    while(current!=nullptr){
        next = current->next;
        current->next = prev;
        prev =  current;
        current = next;
    }
    return prev;
}
int main()
{
    node* head = new node();

    head->data = 1;
    head->next = NULL;
    head = push(head,2);
    head = push(head,3);
    head = push(head,4);
    traversal(head);
    head = reverse(head);
    traversal(head);
    return 0;
}