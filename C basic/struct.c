#include<stdio.h>
struct address
{
    int houseNo;
    int block;
    char city[20];
    char state[30];
};
void printAdd(struct address ad1);

int main()
{
    struct address ad1[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the houseNo:    ");
        scanf("%d \n ",&ad1[i].houseNo);
        printf("enter block");
        scanf("%d \n",&ad1[1].block);
        printf("enter city name:    ");
        scanf("%s \n",ad1[i].city);
        printf("enter state name:      ");
        scanf("%s \n",&ad1.state);
        void printAdd(ad1);
    }
    void kkkprintAdd(struct address ad1)
    {
        printf("address is : %d %d %s %s ",ad1.houseNo, ad1.block,ad1.city,ad1.state);

    }


}