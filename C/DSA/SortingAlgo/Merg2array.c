#include<stdio.h>
void mergesort(int* a, int* b ,int *c, int m , int n)
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k] = b[j];
            k++;
            j++;
        }
        else
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<m)
    {
        // if(a[i]>a[i+1])
        // {
        //     int temp = a[i];
        //     a[i] = a[i+1];
        //     a[i+1] = temp;
        // }
        c[k] = a[i];
        k++;
        i++;
    
    }
    while(j<n)
    {
        // if(b[j]>b[j+1])
        // {
        //     int temp = b[j];
        //     b[j] = b[j+1];
        //     b[j+1] = temp;
        // }     
        
        c[k] = b[j];
        j++;
        k++;
    }
}
void traversal(int* arr)
{
    for(int i=0;i<14;i++)
    {
        printf("%d ",arr[i]);

    }
}
int main()
{
    int m = 7,n=7;
    int a[7] = {2,6,8,9,23,786,109};
    int b[7] = {3,4,7,9,90,787,110};
    int c[m+n];
    mergesort(a,b,c,m,n);
    traversal(c);
    return 0;
}