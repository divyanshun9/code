#include<stdio.h>
void swap(int *a ,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}
void bubble(int *a,int n)
{
    int flag;
    for(int i=0;i<n-1;i++)
    {
       flag =0;
       for(int j=0;j<n-1-i;j++)
       {
           if(a[j]>a[j+1])
           {
               swap(&a[j],&a[j++]);
               flag =1;
           }
       }
       if(flag ==1)
         break;
    }
}
int main()
{
    int a[5]={8,5,7,3,2};
    bubble(a,5);
    printf("array after sorting\n");
     for(int i=0;i<5;i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}
