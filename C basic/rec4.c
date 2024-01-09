#include<stdio.h>
int calcpercentage(int science, int maths, int sanskrit);
int main()
{
    int maths, science, sanskrit;
    printf("enter maths marks:      ");
    scanf("%d",&maths);
    printf("\n enter science marks:    ");
    scanf("%d",&science);
    printf("\n enter sanskrit mmarks:    ");
    scanf("%d",&sanskrit);
    printf("enter the percentage obtain")




}
int calcpercentage(int science, int maths, int sanskrit)
{
    int percent= ((science +maths + sanskrit )/300)*100;
    return percent; 

}