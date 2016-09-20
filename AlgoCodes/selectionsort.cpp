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
void selectionsort(int arr[],int size){
	for(int i=0;i<size;i++){
		int min_index = i;
		for(int j=i;j<size;j++){
			if(arr[j]<arr[min_index]) min_index = j;
		}
		swap(&arr[i],&arr[min_index]);
		print_arr(arr,size);
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
	selectionsort(a,n);
	// print_arr(a,n);
	return 0;
}