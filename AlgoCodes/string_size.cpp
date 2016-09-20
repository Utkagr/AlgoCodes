#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char s[] = {'s','h','u','b'};
	cout<<sizeof(s)<<endl; 			//4
	cout<<sizeof("shub")<<endl;		//5
	cout<<strlen("shub")<<endl;		//4
	return 0;
}