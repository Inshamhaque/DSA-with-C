#include<stdio.h>
#include<stdlib.h>
// implementing Array as an ADT
struct myarray // --> ADT
{
    int total_size;
    int used_size;
    int *ptr;//main array as a pointer 
};

/*void createArray(struct myarray *a, int tsize, int usize)
{
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int*)malloc(tsize * sizeof(int));

}*/

void setVal(struct myarray *a)
{
    for(int i=0;i< a->used_size;i++)
    {
        printf("enter the %d element:    ",i);
        scanf("%d",&((a->ptr)[i]));
    }
}
void show(struct myarray *a)
{
    for(int i=0;i<(*a).used_size;i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}


int main()
{
    struct myarray marks;
    //createArray(&marks,10,2);
    // instead of using createArray fn: 
    marks.used_size = 2;
    marks.total_size = 10;
    marks.ptr  = (int*)malloc(marks.total_size*sizeof(int));
    setVal(&marks);
    show(&marks);
}
