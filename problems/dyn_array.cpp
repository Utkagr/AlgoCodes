#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void store_input(int* arr,int size){
	for(int i=0;i<size;i++){
		cout<<"Enter the "<<i<<"th element"<<endl;
		cin>>arr[i];
	}
}
void print_arr(int* arr,int size){
	for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
}
int main(){
	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	int* dynarray = (int*)malloc(sizeof(int)*size);
	store_input(dynarray,size);
	print_arr(dynarray,size);
}
