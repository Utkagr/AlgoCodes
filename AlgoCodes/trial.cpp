#include <iostream>
using namespace std;
struct Book{
	int page;
	char* name;
}book1;
int main(){
	book1.page=2;
	cout<<book1.page<<endl;
	return 0;
}