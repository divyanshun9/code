#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}
node;

int main()
{
    int n,a;
    node *p ,*q,*head;
    
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    printf("enter the element\n");
    p=(node *)malloc(sizeof(node));
    scanf("%d",&a);
    
    p->data=a;
    p->next=NULL;
    head= p;
    
    for(int i=1;i<n;i++)
    {
        int n=0;
       
    printf("enter the element\n");
    q=(node *)malloc(sizeof(node));
    scanf("%d",&n);
    
    q->data=n;
    q->next=NULL;
    
    p->next=q;
    p=p->next;
    }
    
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    
}
