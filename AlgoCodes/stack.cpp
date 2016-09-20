#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

char* return_string(char* str){
	int n=strlen(str);
	stack<char> st;
	int i=0;
	st.push(str[0]);
	char temp = str[0];
	i = 1;
	char k;
	while(i<n){
		if(st.empty()){
			st.push(str[i]);
		}
		else{
			k = temp;
			if(st.top() == str[i]){
				st.pop();
				i++;
				continue;
			}
			if(k==str[i]){
				i++;
				continue;
			}
			else{
				temp = str[i];
				st.push(str[i]);
			}
		}
		i++;
	}
	n = st.size();
	char* arr = new char(n);
	arr[n] = '\0';
	for(i=n-1;i>=0;i--){
		arr[i] = st.top();
		st.pop();
	}
	return arr;
}
int main(){
	string str;
	cout<<"Input a string:"<<endl;
	cin>>str;
	char *arr = &str[0];
	str = return_string(arr);
	cout<<str<<endl;
	return 0;
}