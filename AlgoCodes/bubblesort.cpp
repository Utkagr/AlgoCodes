#include <iostream>
using namespace std;

void print_arr(int arr[],int size){
	for(int i= 0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void swap(int *p1,int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void bubblesort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0; j < size-i-1;j++){
			if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
			print_arr(arr,size);
		}
	}
}
int main(){
	int n;
	cout<<"Input size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Input array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubblesort(a,n);
	print_arr(a,n);
	return 0;
}