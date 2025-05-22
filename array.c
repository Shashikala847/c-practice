#include<stdio.h>
int main()
{
    
   int arr1[]={3,5,8,9};
   int size1=sizeof(arr1)/sizeof(arr1[0]);
   int min=arr1[i];
   for(int i=0;i<size1;i++)
   {
       if(arr1[i]<min)
       {
           min=arr1[i];
       }
   }
   printf("%d",min);
   return 0;
}

