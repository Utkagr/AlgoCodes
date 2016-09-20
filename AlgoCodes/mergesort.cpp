#include <iostream>
using namespace std;

void print_arr(int arr[],int size){
	for(int i= 0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void merge(int arr[],int l,int m,int r){
	int i=0,j=0,k=0;
	int nl = m-l+1;
	int rl = r-m;

	int left[nl],right[rl];
	for(i=0;i<nl;i++){
		left[i] = arr[l+i];
	}
	for(j=0;j<rl;j++){
		right[j] = arr[j+m+1];
	}
	i = 0,j = 0,k = l;

	while(i < nl && j <rl){
		if(left[i] <= right[j]){
			arr[k] = left[i];
			i = i+1;
		}
		else{
			arr[k] = right[j];
			j = j+1;
		}
		k = k+1;
	}
	while(i<nl){
		arr[k] = left[i];
		i++;
		k++;
	}
	while(j<rl){
		arr[k] = right[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int l,int r){
	if(l<r){
		int m = l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
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
	mergesort(a,0,n-1);
	print_arr(a,n);
	return 0;
}