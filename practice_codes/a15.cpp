#include <iostream>
using namespace std;

int main(){
	int i=1,sum=0;
	for(int j=0;j<4;j++){
		sum += i*i;
		i = i + 3;
	}
	cout << sum;
	return 0;
}