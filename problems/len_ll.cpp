#include <iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};
int length_of_linked_list(struct node* head){
	int len=0;
	while(head!=NULL){
		len++;
		head=head->next;
	}
	return len;
}
int main(){
	//Complete
	return 0;
}