#include<stdio.h>
#include<stdlib.h>

struct node {
   int data;
   int priority;
   struct node* next;
};

struct node* insert(struct node* front, struct node* back, int priority, int data) {
   struct node* newNode = (struct node*)malloc(sizeof(struct node));
   newNode->data = data;
   newNode->priority = priority;
   newNode->next = NULL;

   // Handling empty queue
   if (front == NULL) {
      front = newNode;
      back = newNode;
      return front;
   }

   struct node* tmp = front;

   while (tmp != back && tmp->priority < newNode->priority) {
      tmp = tmp->next;
   }

   newNode->next = tmp->next;
   tmp->next = newNode;

   // Update back pointer if newNode is inserted at the end
   if (newNode->next == NULL) {
      back = newNode;
   }

   return front;
}

void display(struct node* head, struct node* back) {
   struct node* tmp = head;
   while (tmp != back) {
      printf("(%d->%d) ", tmp->data, tmp->priority);
      tmp = tmp->next;
   }
   if (tmp != NULL) {
      printf("(%d->%d)", tmp->data, tmp->priority);
   }
   printf("\n");
}

struct node* delete() {
   // Implement the delete function if needed
   return NULL;
}

int main() {
   struct node* front = NULL;
   struct node* back = NULL;

   front = insert(front, back, 3, 20);
   front = insert(front, back, 2, 10);
   front = insert(front, back, 4, 50);

   display(front, back);

   return 0;
}
