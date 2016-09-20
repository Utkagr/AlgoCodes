#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
node* head;
void insert(int x){
	node* temp = new node;
	temp->data = x;
	temp->next = NULL;
	if(head != NULL) temp->next = head;
	head = temp;
}
void reverse_print(node* p){
	if(p == NULL){
		return;
	}
	reverse_print(p->next);
	cout<<p->data<<" ";
}
void print(){
	node* temp = head;
	cout<<"List is:";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main(){
	int n;
	head = NULL;
	cout<<"How many numbers?:";
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cout<<"enter num "<<i+1<<endl;
		cin>>temp;
		insert(temp);
		print();	
	}
	cout<<"Reverse list using recursion:";
	reverse_print(head);
}