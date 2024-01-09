# include<stdio.h>
# include<string.h>
//bank account creation 
typedef struct Bank
{
    char name[30];
    int acc_no;
}acc;
int main()
{
    acc b1;
    b1.acc_no=123456; 
    strcpy(b1.name,"abc");
    acc b2;
    b2.acc_no = 678975;
    strcpy(b2.name,"wyx");
    printf("Name and acc no is %s and %d\n ",b1.name,b1.acc_no);
    printf("Name and acc no is %s and %d",b2.name,b2.acc_no);
}