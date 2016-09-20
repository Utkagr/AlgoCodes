#include<iostream>
using namespace std;

//inline function use with references
inline void swap(int& a,int& b){
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int a = 1,b = 2;
	swap(a,b);
	cout << a << " " << b << endl;
	return 0;
}