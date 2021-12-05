: Delete a key from Doubly Linked List and update the list.
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 struct Node *prev;
 int data;
 struct Node *next;
};
void Create(struct Node **head, struct Node **tail)
{
 struct Node *newNode;
 int choice = 1;
 while (choice)
 {
 newNode = (struct Node *)malloc(sizeof(struct Node));
 printf("\nEnter the data");
 scanf("%d", &newNode->data);
 newNode->next = NULL;
 newNode->prev = NULL;
 if (*head == NULL && *tail == NULL)
 *head = *tail = newNode;
 else
 {
 (*tail)->next = newNode;
 newNode->prev = *tail;
 *tail = newNode;
 }
 printf("\nEnter 1 to continue or 0 to finish data entry :");
 scanf("%d", &choice);
 }
}
void DeleteKey(struct Node **head, int key)
{
 struct Node *temp = *head;
 while(temp!=NULL)
 {
 if(temp->data == key)
 {
 if(temp==*head)
 {
 *head = (*head)->next;
 free(temp);
 temp = *head;
 (*head)->prev =NULL;
 }
 else
 {
 temp->prev->next = temp->next;
 temp->next->prev = temp->prev;
 free(temp);
 printf("Key Removed");
 return;
 }
 }
 else
 { 
 temp = temp->next;
 }
 }
 printf("Key Not found");
 return;
}
void Display(struct Node *head,struct Node *last)
{
 while (head != NULL)
 {
 printf("%d ", head->data);
 head = head->next;
 }
}
int main()
{
 struct Node *start = NULL, *tail = NULL;
 Create(&start, &tail);
 Display(start,tail);
 int key;
 printf("\nEnter the Key to be Remove");
 scanf("%d", &key);
 DeleteKey(&start,key);
 Display(start,tail);
}
