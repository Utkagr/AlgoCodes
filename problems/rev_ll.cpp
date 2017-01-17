#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};
void reverse(struct node **headref){
	struct node* prev = NULL;
	struct node* current = *headref;
	struct node* next = NULL;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*headref=prev;
}
void push(struct node* current,int newdata){
	struct node* head = current;
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = newdata;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = newnode;
	newnode->next=NULL;
}
void print(struct node*head){
	struct node* current = head;
	while(current!=NULL){
		cout<<current->data<<" ";
		current = current ->next;
	}
}
int main(){
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->data = 1;
	push(head,2);
	push(head,3);
	push(head,4);
	push(head,5);
	print(head);
	reverse(&head);
	print(head);
	return 0;
}