#include<stdio.h>

void bubble(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
       for(int j= 0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               int temp = arr[j];
               arr[j]= arr[j+1];
               arr[j+1]= temp;
           }
       }
    }
    
    for(int i=0;i<n;i++)
     printf("%d ",arr[i]);
}


int main()
{
  int n;
  printf("enter the number of elements\n");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements of array \n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);  
  }
  
  bubble(arr,n);
}
