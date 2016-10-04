#include<bits/stdc++.h>
using namespace std;
//Implementation of Damerau–Levenshtein distance

int min(int x,int y,int z){
	return min(min(x,y),z);
}
int lev_dist(char* s1,char* s2,int l1,int l2){
	int cost;
	if(l1 == 0) return l2;
	if(l2 == 0) return l1;
	//deletion,insertion,switching and substitution
	if(s1[l1-1] == s2[l2-1]) return lev_dist(s1,s2,l1-1,l2-1);
	if((s1[l1-1] == s2[l2-2]) && (s1[l1-2] == s2[l2-1])) return 1+lev_dist(s1,s2,l1-2,l2-2);
	return 1+min(lev_dist(s1,s2,l1-1,l2),lev_dist(s1,s2,l1,l2-1),lev_dist(s1,s2,l1-1,l2-1));
}
int main(){
	cout<<"Enter the first string:";
	char str1[100],str2[100];
	scanf("%s",str1);
	cout<<"Enter the second string:";
	scanf("%s",str2);
	cout<<"The levenshtein distance is "<<lev_dist(str1,str2,strlen(str1),strlen(str2))<<endl;
	return 0;
}