#include<stdio.h>
//passing structures through functions 
struct book
{
    int x;
    int y; 
};
struct sum(struct book b1, struct book b2);
int main()
{
    struct book b1;
    b1.x = 14;
    b1.y = 67; 
    struct book b2;
    b2.x = 12;
    b2.y = 56;
    sum(b1,b2);
}
struct sum(struct book b1, struct book b2)
{
    struct sum.x = b1.x+b2.x;
    struct sum.y = b1.y+ b2.y;
    return sum.x;
    return sum.y;
}