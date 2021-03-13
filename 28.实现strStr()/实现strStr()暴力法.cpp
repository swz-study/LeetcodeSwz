#include<iostream>
using namespace std;

int strStr(string haystack, string needle) {
	if(needle == ""||haystack == needle)
		return 0;
	  int i=0,j=0;
    for(i=0;i<haystack.size();i++){
		for(j=0;j<needle.size();j++){
			if(haystack[i+j]!=needle[j])
				break;
		}
		if(j == needle.size())
				return i;
	}
	return -1;
}


int main(){
	string hay;
	string needle;
	cin>>hay>>needle;
	int num = strStr(hay,needle);
	cout<<num<<endl;
	return 0;
}

 
