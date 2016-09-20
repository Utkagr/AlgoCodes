#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = s.length();
	int i;
	stack<char> st;
	i = 0;
	st.push(s[0]);
	char temp = s[0];
	i = 1;
	char k;
	while(i<n)
	{
		if(st.empty())
		{
			st.push(s[i]);
		}	
		else
		{
			k = temp;
			if(st.top()==s[i])
			{
				st.pop();
				i++;
				continue;
			}
			if(k==s[i])
			{
				i++;
				continue;
			}	
			else
			{
				temp = s[i];
				st.push(s[i]);
			}
		}
		i++;
	}
	n = st.size();
	char *arr = (char *)malloc(sizeof(char)*(n+1));
	arr[n] = '\0';
	for(i=n-1;i>=0;i--)
	{
		arr[i] = st.top();
		st.size();
		st.pop();
	}
	cout << arr << "\n";
	return 0;
}
// dfaaafe -> dffe -> de