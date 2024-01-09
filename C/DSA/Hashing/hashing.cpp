#include<iostream>
using namespace std;
class node{
    public:
        int info;
        list *next;
};
class hashing{
    public:
        int size;
        int *table;
        hashing(int size){
            int* table = new int[size];
        }
        for(int i=0;i<size;i++){
            table[i]=-1;
        }
        void seperatechaining(int data, int size){
            int pos = data%size;
            if(table[pos]==-1){
                node* n = new node();
                n->info = data;
                n->next = NULL;
                
            }
        }
        void linearprobing();
        void quadraticprobing();
        void doublehshing();
};
void hashing::seperatechaining(int data,int size)
{
    

}
int main()
{
    cout<<"-+-+-+-+-Welcome to hashing tutorial-+-+-+-+-"<<endl;
    // cout<<"1->Seperate chaining";
    // int inp;
    // cin>>inp;
    hashing h;
    h.
    
    return 0;
}