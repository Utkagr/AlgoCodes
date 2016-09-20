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
int partition(int arr[],int l,int r){
	// Pivot is always right element.	
	int pivot = arr[r];
	int shift_index = l;
	for(int i = l;i<r;i++){
		if(arr[i]<=pivot){
			swap(&arr[i],&arr[shift_index]);
			shift_index++;
		}
	}
	swap(&arr[shift_index],&arr[r]);
	return shift_index;
}
void quicksort(int arr[],int l,int r){
	if(l<r){
		int pIndex = partition(arr,l,r);
		quicksort(arr,l,pIndex-1);
		quicksort(arr,pIndex+1,r);
	}
}
int main(){
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int a[n];
	cout<<"enter the elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	print_arr(a,n);	
	return 0;
}