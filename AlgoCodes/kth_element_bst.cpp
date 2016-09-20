#include <iostream>

struct node{
	int data;
	node* left;
	node* right;
};
int kth_element(node* root){
	if(root ==  NULL) return;
	node* temp = root;
	while(temp->left != NULL){
		temp = temp->left;
	}
	small_elem = temp->data;
}
int main(){
	node* head == NULL;
	//input a tree

	return 0;
}