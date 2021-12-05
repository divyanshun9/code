Delete a key from Circular Linked List and update the list.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node *next;
};
void Display(struct Node **tail)
{
 struct Node *temp = (*tail)->next;
 while(temp->next!= (*tail)->next)
 {
 printf("%d ",temp->data);
 temp= temp->next;
 }
}
void DeleteKey(struct Node **tail, int key)
{
 struct Node *temp = (*tail)->next, *prevNode ;
 while(temp->next!= (*tail)->next)
 {
 if(temp->data == key)
 {
 if(temp==(*tail)->next)
 {
 (*tail)->next= temp->next;
 free(temp);
 }
 else
 {
 prevNode->next = temp->next;
 free(temp);
 }
 printf("Key Removed");
 return;
 }
 else
 { 
 prevNode = temp;
 temp = temp->next;
 } 
 }
 printf("Key Not found");
 return;
}
int main()
{
 struct Node *newNode,*tail=NULL;
 int choice =1;
 while(choice)
 {
 newNode = (struct Node*)malloc (sizeof( struct Node)); 
 printf("\nEnter the data");
 scanf("%d",&newNode->data);
 newNode->next=0;
 if(tail ==NULL)
 {
 tail = newNode; 
 tail->next = newNode;
 }
 else 
 {
 newNode->next =tail->next;
 tail->next = newNode;
 tail = newNode;
 }
 printf("\nEnter 1 to continue or 0 to finish data entry :");
 scanf("%d",&choice);
 }
 Display(&tail);
 printf("\n");
 int key;
 printf("Enter the Key to be Remove");
 scanf("%d", &key);
 DeleteKey(&tail, key);
 Display(&tail);
 return 0;
}
