#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

int isempty(node* f, node* b) {
    if (f == NULL && b == NULL) {
        return 1;
    }
    return 0;
}

void enqueue(node*& f, node*& b, int data) {
    struct node* temp = new node();
    temp->data = data;
    temp->next = nullptr;
    if (isempty(f, b) == 1) {
        f = temp;
        b = temp->next;
    }
    else {
        b->next = temp;
        b = b->next;
    }
}

void traversal(node* f, node* b) {
    while (f != NULL) {
        cout << f->data << " ";
        f = f->next;
        if (f == b) {
            break;
        }
    }
}

int main() {
    node* f = NULL;
    node* b = NULL;

    //enqueue the elements in queue
    enqueue(f, b, 10);
    enqueue(f, b, 11);
    enqueue(f, b, 12);
    enqueue(f, b, 13);
    enqueue(f, b, 14);
    traversal(f, b);

    // Free the allocated memory
    while (f != NULL) {
        node* temp = f;
        f = f->next;
        delete temp;
    }

    return 0;
}
