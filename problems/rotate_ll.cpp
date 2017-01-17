#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* rotate_by_k(int k,struct node* init){
	struct node*head = init;
	if(k>0){
		while(init != NULL){
			init=init->next;
		}
		init->next = head;
		while(k!=0){
			k--;
			head=head->next;
		}
	}
	return head;
}
int main(){
	int k;
	cout<<"Enter the value of k:";
	cin>>k;

}