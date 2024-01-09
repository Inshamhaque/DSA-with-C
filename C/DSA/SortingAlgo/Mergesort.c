#include<stdio.h>
#include<stdlib.h>
void merge(int a[], int mid, int low, int high)
{
    int i,j,k,b[100];
    //int *b = malloc((high-low+1)*sizeof(int));
    i = low;
    j = mid+1;
    k = low;
    while(i<mid+1 && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<mid+1)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while(j<high)
    {
        b[k] = a[j];
        j++;
        k++; 
    }
    //copying back to main array
    for(int i=low;i<high;i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int a[], int low, int high)
{ 
    int mid;
    if(low<high)
    {
        mid = (low+high)/2; 
        // upar se niche (array ko sub arrays m todna)
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        // returning back to top (ab niche se upar = jodna)
        merge(a,mid,low,high);
    }
}
void traversal(int* arr, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
}
int main()
{
    int m = 10;
    int a[10] = {2,6,8,9,23,3,4,8,67};
    int b[m];
    mergeSort(a,0,8);
    traversal(a,9);
    return 0;
}