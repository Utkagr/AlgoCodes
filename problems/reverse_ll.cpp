#include <iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};
void reverse(struct node** ref){
	struct node* current = *ref;
	
}
int main(){
	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* n1 = (struct node*)malloc(sizeof(struct node));
	struct node* n2 = (struct node*)malloc(sizeof(struct node));
	head->data = 2;
	head->next = n1;
	n1->data = 3;
	n1->next = n2;
	n2->data = 4;
	n2->next = NULL;
	reverse(&head);
	return 0;
}