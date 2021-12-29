#include<stdio.h>

void selection(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min= i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
             min=j;
            }
        }
        int temp= arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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
  
  selection(arr,n);
}
