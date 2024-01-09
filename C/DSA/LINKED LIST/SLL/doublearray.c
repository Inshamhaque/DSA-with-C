#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

int avail=1,start=0,size;

void traversal(int data[],int pointer[])
{
   int i=start;
   size=0;
   printf("\nIndex  Items  Pointing_To\n");

   
   while(i!=-1)
   {
      size++;
      printf("%d      %d       %d\n",i,data[i],pointer[i]);
      i=pointer[i];
   }
} 

void insert(int data[],int pointer[])
{
    if(avail==-1)
    {
       printf("\nOverflow, Unable to Insert\n");
    }
    else
    {
       int item,loc;
       while(1)
       {
          printf("\nEnter the Insertion Location: ");       
          scanf("%d",&loc);
          if(loc<=(size+1) && loc>=1)
          {
             break;
          }
          printf("Invalid Input!!\n");
       }
       printf("Enter the Item: ");
       scanf("%d",&item);
       if(loc==size+1)
       {
          int i=start;
          while(pointer[i]!=-1)
           {  
              i=pointer[i];
           } 
          data[avail]=item;
          pointer[i]=avail;
          avail=pointer[avail];
          pointer[pointer[i]]=-1;
       }
       else if(loc==1)
       {
          data[avail]=item;
          int tmp=pointer[avail];
          pointer[avail]=start;
          start=avail;
          avail=tmp;
       }
       else
       {
           int i=start,j;
           for(j=1;j<loc-1;j++)
           {  
              i=pointer[i];
           }        
           data[avail]=item;
           int tmp=pointer[avail];
           pointer[avail]=pointer[i];
           pointer[i]=avail;
           avail=tmp;
       }
       if(avail==SIZE-2)
          avail=-1;
       
    }
}
void delete(int data[],int pointer[])
{
   if(avail==0)
   {
      printf("UnderFlow, Unable to Delete\n");
   }
   else
   {
       int loc;
       while(1)
       {
          printf("\nEnter the Location to Delete: ");       
          scanf("%d",&loc);
          if((loc)<=(size) && loc>=1)
          {
             break;
          }
          printf("Invalid Input!!\n");
       }
       if(loc==size)
       {
          int i=start;
          while(pointer[pointer[i]]!=-1)
           {  
              i=pointer[i];
           } 
          int tmp=pointer[i];
          pointer[pointer[i]]=avail;
          pointer[i]=-1;
          avail=tmp;
       }
       else if(loc==1)
       {
          int tmp=start;
          start=pointer[start];
          pointer[tmp]=avail;
          avail=tmp;
       }
       else
       {
           int i=start,j;
           for(j=1;j<loc-1;j++)
           {  
              i=pointer[i];
           }        
           int tmp=pointer[i];
           pointer[i]=pointer[pointer[i]];
           pointer[tmp]=avail;
           avail=tmp;

       }
   }

}

int search(int data[],int pointer[])
{
   int i=start,find,node=0;
   printf("\nEnter the Item to Find. ");
   scanf("%d",&find);
   while(i!=-1)
   {
      node++;
      if(find==data[i])
      {
         printf("\nItem Found!! at NODE %d\n",node);
         return 1;
      }
      i=pointer[i];
   }
   printf("\nUnable to find Item ,Node Compared %d\n",node);
   return 0;
}

void main()
{
    int data[SIZE],pointer[SIZE];
    for(int i=1;i<SIZE;i++)
    {   pointer[i]=i+1;}
    data[0]=12;
    pointer[0]=-1;

    
    traversal(data,pointer);
    while(1)
    {
       int press;
       printf("\n1. Press 1 for Insertion\n2. Press 2 for Deletion\n3. Press 3 to Search\nPress. ");
       scanf("%d",&press);
       
       if(press==1)
       {
           insert(data,pointer);
           traversal(data,pointer);
       }
       else if(press==2)
       {
           delete(data,pointer);
           traversal(data,pointer);
       }
       else if(press==3)
       {
          search(data,pointer);
       }
       else
          printf("Invalid Input!!\n");
       
    }
 
}
