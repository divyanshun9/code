 Delete a key from singly Linked List and update the list.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node * next;
};
void Display(struct Node *head)
{
 struct Node *temp;
 temp =head;
 while(temp)
 {
 printf("%d ",temp->data);
 temp= temp->next;
 }
}
void DeleteKey(struct Node **head, int key)
{
 struct Node *temp = *head, *prevNode ;
 while(temp!=NULL)
 {
 if(temp->data == key)
 {
 if(temp==*head)
 {
 *head = (*head)->next;
 free(temp);
 temp = *head;
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
 struct Node *newNode,*temp,*head=NULL;
 int choice =1;
 while(choice)
 {
 newNode = (struct Node*)malloc (sizeof( struct Node)); 
 printf("\nEnter the data");
 scanf("%d",&newNode->data);
 newNode->next=0;
 if(head ==NULL)
 head =temp = newNode; 
 else 
 {
 temp->next = newNode;
 temp = newNode;
 }
 printf("\nEnter 1 to continue or 0 to finish data entry :");
 scanf("%d",&choice);
 }
 Display(head);
 printf("\n");
 int key;
 printf("Enter the Key to be Remove");
 scanf("%d", &key);
 DeleteKey(&head, key);
 Display(head);
 return 0;
}
