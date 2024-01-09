#include<stdio.h>
void readnumbers(int arr[],int n);//or *arr
int main()
{
  int arr[]= {1,2,3,4,5,6};
  readnumbers(arr,6);
}
void readnumbers(int arr[],int n)//or *arr
{
    for(int i=0;i<n;i++)
    {
      printf("%d \t",arr[i]);
    }
} 