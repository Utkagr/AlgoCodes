#include <iostream>
using namespace std;

int binarysearch(int arr[],int l,int r,int element){
	if(r >= l){
		int mid = l + (r-l)/2;
		if(arr[mid] == element) return mid;
		if(arr[mid] > element) return binarysearch(arr,l,mid-1,element);
		return binarysearch(arr,mid + 1,r,element);		
	}
	else return -1;
}

int main(){
	int n,element;
	cout<<"Input size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Input array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Input the element to search in the array:";
	cin>>element;
	int index = binarysearch(a,0,n-1,element);
	(index == -1)?cout<<"Element is not present in array":cout<<"Element is present at index "<<index<<endl;
	return 0;
}