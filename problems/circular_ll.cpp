#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};
void push(struct node** headref,int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = *headref;	
	struct node* temp = *headref;
	if(*headref != NULL){
	while(temp->next != *headref)
		temp=temp->next;
	temp->next = newnode;
	}
	else
		newnode->next=newnode;
	*headref=newnode;
}
void splitlist(struct node** headref,struct node** head1,struct node** head2){
	struct node* fast = *headref;
	struct node* slow = *headref;
	while((fast->next != *headref)&&(fast->next->next)){
		fast= fast->next->next;
		slow= slow->next;
	}
	if(fast->next->next == *headref)
		fast=fast->next;
	*head1 = *headref;
	fast->next = slow->next;
	*head2 = slow->next;
	slow->next = *headref;
}
void printList(struct node *head)
{
  struct node *temp = head; 
  if(head != NULL)
  {
    printf("\n");
    do {
      printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != head);
  }
}
int main(){
	struct node*head = NULL;
	struct node*head1 = NULL;
	struct node*head2 = NULL;
	push(&head,3);
	push(&head,2);
	push(&head,1);
	printList(head);
	splitlist(&head,&head1,&head2);
	printList(head1);
	printList(head2);
	return 0;
}