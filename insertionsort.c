#include<stdio.h>
void insertion(int *a,int n)
{
    for(int i=1;i<n;i++)
    {
        int k=a[i];
        int j;
        for(j=i-1; (j>=0 && a[j]>k) ;j--)
        {
             a[j+1]=a[j];
        }
        a[j+1]=k;
    }
}

int main()
{
    int a[5]={8,5,7,3,2};
    insertion(a,5);
    printf("array after sorting\n");
     for(int i=0;i<5;i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}
