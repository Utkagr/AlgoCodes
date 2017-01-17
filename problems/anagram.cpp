#include <iostream>
#include <stdio.h>
using namespace std;
#define bits 256
bool isAnagram(char* str1,char* str2){
	int arr1[bits] = {0};
	int arr2[bits] = {0};
	int i;
	for(i=0;str1[i] && str2[i];i++){
		arr1[str1[i]]++;
		arr2[str2[i]]++;
	}
	if(str1[i] || str2[i])
		return false;
	for(i=0;i<bits;i++){
		if(arr1[i] != arr2[i])
			return false;
	}
	return true;
}
int main(){
	char str1[] = "listen";
	char str2[] = "silent";
	if(isAnagram(str1,str2))
		printf("They are anagrams.\n");
	else
		printf("They are not anagrams.\n");
	return 0;
}