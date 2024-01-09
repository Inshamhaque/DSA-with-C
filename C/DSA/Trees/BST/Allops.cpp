#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        left=right=NULL;
    }
};
class BST{
    private:
    node* root;
    node* insertrecursive(int data, node* current){
        if(current==nullptr){
            return new node(data);
        }
        if(data<current->data){
            current->left = insertrecursive(data,current->left);
        }
        else if(data>current->data){
            current->right = insertrecursive(data, current->right);
        }
        return current;
    }
    node* findmin(node* current){
        if(current->left!=nullptr){
            current = current->left;
        }
        return current;
    }
    node* deleterecursive(int data, node* current){
        if(current==nullptr){
            return current;
        }
        if(data<current->data){
            current->left = deleterecursive(data,current->left);
        }
        else if(data>current->data){
            current->right = deleterecursive(data, current->right);
        }
        else{ //element found 
            if(current->left == nullptr){
                node* temp = current->right;
                delete current;
                return temp;
            }
            else if(current->right ==  nullptr){
                node* temp = current->left;
                delete current;
                return temp;
            }
            //two children 
            node* temp = findmin(current->right);
            current->data = temp->data;
            current->right = deleterecursive(temp->data, current->right);
        }
        return current;
    }
    node* sibling(node* current, int data){
        node* parent = nullptr;
        while(current!=nullptr && current->data!=data){
            parent = current;
            if(current->data<data){
                current = current->right;
            }
            else if(current->data>data){
                current = current->left;
            }
        }
        if(current==nullptr){
            return current;
        }
        if(parent==nullptr){
            return nullptr;
        }
        if(parent->left!=nullptr&&parent->left->data==data){
            return parent->right;
        }
        else if(parent->right!=nullptr&&parent->right->data==data){
            return parent->left;
        }
        return nullptr;
    }
    
    public:
    BST(){
        root = nullptr;
    }
    void insert(int value){
        root = insertrecursive(value,root);
    }
    void remove(int value){
        root = deleterecursive(value, root);
    }
    void inorder(node* root){
        if(root!=nullptr){
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
    }
    void printinorder(){
        inorder(root);
        cout<<" "<<endl;
    }
    
    void printsibling(int data){
        node* sub = sibling(root, data);
        if(sub==nullptr){
            cout<<"Subling not found"<<endl;
        }
        else{
            cout<<"Sibling is "<<sub->data<<endl;
        }
    }
    int leaf(node* current){
        if(current==nullptr){
            return 0;
        }
        if(current->left==nullptr||current->right==nullptr){
            return 1;
        }
        int leftleaves = leaf(current->left);
        int rightleaves = leaf(current->right);
        return  leftleaves+rightleaves;
        
    }
    void printleaf(){
        int cnt = leaf(root);
        cout<<"number of leafs are:  "<<cnt;
    }
    
};
int main()
{
    BST b;
    b.insert(30);
    b.insert(20);
    b.insert(50);
    b.insert(40);
    b.insert(70);
    b.printinorder();
    b.printsibling(70);
    b.printleaf();
    return 0;
}