#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Hash functions in use 
int hashfunction1(int element) 
{
    return element % 19;               
}
int hashfunction2(int element) {
    return (element % 7);
}
struct node {
    int data;                  
    struct node* next;
};
// seperate Chaining
void sc_insert(struct node** sc, int size, int key) {
    int index = key % size;
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->next = NULL;

    if (sc[index] == NULL) {
        sc[index] = newNode;
    } else {
        struct node* current = sc[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}
void sc_delete(struct node** sc, int key, int size) {
    int index = key % size;
    struct node* current = sc[index];
    struct node* prev = NULL;

    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Element not found for deletion.\n");
        return;
    }

    if (prev == NULL) {
        sc[index] = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}
int sc_search(struct node** ptr, int element, int size) {
    for (int i = 0; i < size; i++) {
        struct node* tmp = ptr[i];
        while (tmp != NULL) {
            if (tmp->data == element) {
                return i;
            }
            tmp = tmp->next;
        }
    }
    return -1;
}
void sc_traversal(struct node** sc, int size) {
    printf("\nHash Table Contents:\n");
    for (int i = 0; i < size; i++) {
        struct node* current = sc[i];
        while (current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
    printf("\n");
}
//Linear Probing
void LP_insert(int* hashtable, int element, int size) {
    int position = hashfunction1(element);
    int H = 1;

    while (hashtable[position] != -1) {
        position = (position + H) % size;
        H++;
    }

    hashtable[position] = element;
}
void LP_delete(int* hashtable, int element, int size) {
    int pos = hashfunction1(element);
    int h = 1;

    while (hashtable[pos] != -1) {
        if (hashtable[pos] == element) {
            hashtable[pos] = -1;
            return;
        }
        pos = (pos + h) % size;
        h++;
    }
    printf("element not found\n");
}
int LP_search(int* hashtable, int element, int size) {
    int pos = hashfunction1(element);
    int h = 1;

    while (hashtable[pos] != -1) {
        if (hashtable[pos] == element) {
            return pos;
        }
        pos = (pos + h) % size;
    }
    return -1;
}
void LP_traversal(int* hashtable, int size) {
    for (int i = 0; i < size; i++) {
        if (hashtable[i] != -1) {
            printf("%d", hashtable[i]);
        } else {
            printf("Null");
        }
        if (i < size - 1) {
            printf("->");
        }
    }
}
//quadratic Probing
void qp_insert(int* hashtable, int element, int size) {
    int position = hashfunction1(element);
    int h = 1;

    while (hashtable[position] != -1) {
        position = position + h * h;
        h++;
    }
    hashtable[position] = element;
}
void qb_delete(int* hashtable, int element, int size) {
    int pos = hashfunction1(element);
    int h = 1;

    while (hashtable[pos] != -1) {
        if (hashtable[pos] == element) {
            hashtable[pos] = -1;
            return;
        }
        pos = (pos + h * h) % size;
        h++;
    }
    printf("element not found\n");
}
int qb_search(int* hashtable, int element, int size) {
    int pos = hashfunction1(element);
    int h = 1;

    while (hashtable[pos] != -1) {
        if (hashtable[pos] == element) {
            return pos;
        }
        pos = (pos + h * h) % size;
    }
    return -1;
}
void qp_traversal(int* hashtable, int size) {
    for (int i = 0; i < size; i++) {
        if (hashtable[i] != -1) {
            printf("%d", hashtable[i]);
        } else {
            printf("NULL");
        }
        if (i < size - 1) {
            printf("->");
        }
    }
}
//Double Hashing
void dh_insert(int* hashtable, int element) {
    int position = hashfunction1(element);
    int h = 1;

    while (hashtable[position] != -1) {
        position = position + h * (hashfunction2(element));
        h++;
    }
    hashtable[position] = element;
}
void dh_delete(int* hashtable, int element, int size) {
    int pos = hashfunction1(element);
    int h = 1;

    while (hashtable[pos] != -1) {
        if (hashtable[pos] == element) {
            hashtable[pos] = -1;
            return;
        }
        pos = (pos + h * hashfunction2(element)) % size;
        h++;
    }
    printf("element not found\n");
}
int dh_search(int* hashtable, int element, int size) {
    int pos = hashfunction1(element);
    int h = 1;

    while (hashtable[pos] != -1) {
        if (hashtable[pos] == element) {
            return pos;
        }
        pos = (pos + h * hashfunction2(element)) % size;
    }
    return -1;
}
void dh_traversal(int* hashtable, int size) {
    for (int i = 0; i < size; i++) {
        if (hashtable[i] != -1) {
            printf("%d", hashtable[i]);
        } else {
            printf("NULL");
        }
        if (i < size - 1) {
            printf("->");
        }
    }
}

int main() {
    srand(time(NULL));
    printf("-+-+-+-+-+-+-This is a Hashing Tutorial by Inshamul Haque-+-+-+-+-+-+-\n");
    
    
    while (1) {
        int inp;
        printf("1->Separate Chaining\n2->Linear Probing\n3->Quadratic Probing\n4->Double Hashing\n5->Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &inp);
        if(inp==5)
        {
            exit(0);
        }
        switch (inp) {
            case 1: // Separate Chaining
            {
                printf("Here you go!!!\n");
                int size = 20;
                struct node** sc = malloc(sizeof(struct node*) * size);
                for (int i = 0; i < size; i++) {
                    sc[i] = NULL;
                }

                int element;
                for (int i = 0; i < size; i++) {
                    int isDuplicate;
                    do {
                        element = rand() % 100;
                        isDuplicate = 0;
                        for (int j = 0; j < i; j++) {
                            if (sc[j] != NULL && sc[j]->data == element) {
                                isDuplicate = 1;
                                break;
                            }
                        }
                    } while (isDuplicate);
                    sc_insert(sc, size, element);
                }

                sc_traversal(sc, size);

                while (1) {
                    printf("1->Insertion\n2->Deletion\n3->Searching\n4->Back to Main Menu\n");
                    printf("Enter your choice: ");
                    int inp2;
                    scanf("%d", &inp2);

                    if (inp2 == 4) {
                        break;
                    }

                    switch (inp2) {
                        case 1:
                            printf("Enter element to insert: ");
                            int element;
                            scanf("%d", &element);

                            int isDuplicate;
                            do {
                                isDuplicate = 0;
                                for (int j = 0; j < size; j++) {
                                    if (sc[j] != NULL && sc[j]->data == element) {
                                        isDuplicate = 1;
                                        printf("Enter element again: ");
                                        scanf("%d", &element);
                                        break;
                                    }
                                }
                            } while (isDuplicate);

                            sc_insert(sc, size, element);
                            sc_traversal(sc, size);
                            break;

                        case 2:printf("Enter element to be deleted: ");
                            int el;
                            scanf("%d", &el);
                            sc_delete(sc, el, size);
                            printf("Deletion complete.\n");
                            sc_traversal(sc, size);
                            break;

                        case 3:
                            printf("Enter element to search: ");
                            int ele;
                            scanf("%d", &ele);
                            printf("Element is at index: %d", sc_search(sc, ele, size));
                            break;

                        default:
                            printf("Invalid input");
                            break;
                    }
                }
                break;
            }

            case 2: // Linear Probing
            {
                srand(time(NULL));
                int element;
                scanf("%d", &element);

                int size = 20;
                int hashtable[20];
                for (int i = 0; i < size; i++) {
                    hashtable[i] = -1;
                }

                for (int i = 0; i < 15; i++) {
                    int isduplicate;
                    do {
                        element = rand() % 100;
                        isduplicate = 0;
                        for (int j = i + 1; j < i; j++) {
                            if (hashtable[j] == element) {
                                isduplicate = 1;
                                break;
                            }
                        }
                    } while (isduplicate);
                    hashtable[hashfunction1(element)] = element;
                }

                LP_traversal(hashtable, size);

                while (1) {
                    printf("1->Insertion\n2->Deletion\n3->Searching\n4->Back to Main Menu\n");
                    printf("Enter your choice: ");
                    int inp3;
                    scanf("%d", &inp3);

                    if (inp3 == 4) {
                        exit;
                    }

                    switch (inp3) {
                        case 1:
                            printf("Enter element to insert: ");
                            int el;
                            scanf("%d", &el);

                            for (int i = 0; i < size; i++) {
                                int isduplicate;
                                do {
                                    isduplicate = 0;
                                    for (int j = 0; j < i; j++) {
                                        if (hashtable[j] == el) {
                                            isduplicate = 1;
                                            printf("Enter element again: ");
                                            scanf("%d", &el);
                                            break;
                                        }
                                    }
                                } while (isduplicate);
                            }

                            LP_insert(hashtable, el, size);
                            LP_traversal(hashtable, size);
                            break;

                        case 2:
                            printf("Enter element to be deleted: ");
                            int em;
                            scanf("%d", &em);
                            LP_delete(hashtable, em, size);
                            LP_traversal(hashtable, size);
                            break;

                        case 3:
                            printf("Enter element to search: ");
                            int element_s;
                            scanf("%d", &element_s);
                            printf("Element is at index: %d", LP_search(hashtable, element_s, size));
                            break;

                        default:
                            printf("Invalid input!!!");
                            break;
                    }
                }
                break;
            }

            case 3: // Quadratic Probing
            {
                srand(time(NULL));
                int size = 20;
                int hash_qp[20];
                for (int i = 0; i < size; i++) {
                    hash_qp[i] = -1;
                }
                int element;
                for (int i = 0; i < 15; i++) {
                    int isduplicate;
                    do {
                        element = rand() % 100;
                        isduplicate = 0;
                        for (int j = i + 1; j < i; j++) {
                            if (hash_qp[j] == element) {
                                isduplicate = 1;
                                break;
                            }
                        }
                    } while (isduplicate);
                    hash_qp[hashfunction1(element)] = element;
                }

                qp_traversal(hash_qp, size);

                while (1) {
                    printf("1->Insertion\n2->Deletion\n3->Searching\n4->Back to Main Menu\n");
                    printf("Enter your choice: ");
                    int inp4;
                    scanf("%d", &inp4);

                    if (inp4 == 4) {
                        exit;
                    }

                    switch (inp4) {
                        case 1:
                            printf("Enter element to insert: ");
                            int e;
                            scanf("%d", &e);

                            for (int i = 0; i < size; i++) {
                                int isduplicate;
                                do {
                                    isduplicate = 0;
                                    for (int j = 0; j < i; j++) {
                                        if (hash_qp[j] == e) {
                                            isduplicate = 1;
                                            printf("Enter element again: ");
                                            scanf("%d", &e);
                                            break;
                                        }
                                    }
                                } while (isduplicate);
                            }

                            qp_insert(hash_qp, e, size);
                            qp_traversal(hash_qp, size);
                            break;

                        case 2:
                            printf("Enter element to be deleted: ");
                            int el3;
                            scanf("%d", &el3);
                            qb_delete(hash_qp, el3, size);
                            qp_traversal(hash_qp, size);
                            break;

                        case 3:
                            printf("Enter element to search: ");
                            int e_s;
                            scanf("%d", &e_s);
                            printf("Element is at index: %d", qb_search(hash_qp, e_s, size));
                            break;

                        default:
                            printf("Invalid input!!!");
                            break;
                    }
                }
                break;
            }

            case 4: // Double Hashing
            {
                srand(time(NULL));
                int size = 20;
                int hash_dh[20];
                for (int i = 0; i < size; i++) {
                    hash_dh[i] = -1;
                }
                int element;

                for (int i = 0; i < size; i++) {
                    int isduplicate;
                    do {
                        element = rand() % 100;
                        isduplicate = 0;
                        for (int j = i + 1; j < i; j++) {
                            if (hash_dh[j] == element) {
                                isduplicate = 1;
                                break;
                            }
                        }
                    } while (isduplicate);
                    hash_dh[hashfunction1(element)] = element;
                }

                dh_traversal(hash_dh, size);

                while (1) {
                    printf("1->Insertion\n2->Deletion\n3->Searching\n4->Back to Main Menu\n");
                    printf("Enter your choice: ");
                    int inp5;
                    scanf("%d", &inp5);

                    if (inp5 == 4) {
                        exit;
                    }

                    switch (inp5) {
                        case 1:
                            printf("Enter element to insert: ");
                            int el_di;
                            scanf("%d", &el_di);

                            for (int i = 0; i < size; i++) {
                                int isduplicate;
                                do {
                                    isduplicate = 0;
                                    for (int j = 0; j < i; j++) {
                                        if (hash_dh[j] == el_di) {
                                            isduplicate = 1;
                                            printf("Enter element again: ");
                                            scanf("%d", &el_di);
                                            break;
                                        }
                                    }
                                } while (isduplicate);
                            }

                            dh_insert(hash_dh, el_di);
                            dh_traversal(hash_dh, size);
                            break;

                        case 2:
                            printf("Enter element to be deleted: ");
                            int el_dd;
                            scanf("%d", &el_dd);
                            dh_delete(hash_dh, el_dd, size);
                            dh_traversal(hash_dh, size);
                            break;

                        case 3:
                            printf("Enter element to search: ");
                            int el_ds;
                            scanf("%d", &el_ds);
                            dh_search(hash_dh, el_ds, size);
                            dh_traversal(hash_dh, size);
                            break;

                        default:
                            printf("Invalid input!!!");
                            break;
                    }
                }
                break;
            }

            default:
                printf("Invalid input! Please enter a valid option.\n");
                break;
        }
    }
    return 0;
}
