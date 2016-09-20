#include <iostream>
using namespace std;

void insertion_sort(int arr[],int size){
	for(int i=1;i<size;i++){
		int value = arr[i];
		int k = i-1;
		while(k>=0 and arr[k]> value){
			arr[k+1] = arr[k];
			k--;
		}
		arr[k+1] = value;
		for(int j=0;j<size;j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
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
	insertion_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}