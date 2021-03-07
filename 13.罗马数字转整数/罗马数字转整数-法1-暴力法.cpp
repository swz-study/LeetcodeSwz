//答案正确，leetcode超时
#include<iostream>
using namespace std;

int romanToInt(string s) {
	int sum = 0;
	for(int i = 0;i<s.length();i++)
	{
		if(s[i]=='I'&&(s[i+1]!='V'&&s[i+1]!='X'))
			sum+=1;
		else if(s[i]=='I'&&s[i+1]=='V')
			sum+=4;
		else if(s[i]=='I'&&s[i+1]=='X')
			sum+=9;
		else if(s[i-1]!='I'&&s[i]=='V')
			sum+=5;
			
		if(s[i]=='X'&&(s[i+1]!='L'&&s[i+1]!='C')&&s[i-1]!='I')
			sum+=10;
		else if(s[i]=='X'&&s[i+1]=='L')
			sum+=40;
		else if(s[i]=='X'&&s[i+1]=='C')
			sum+=90;
		else if(s[i-1]!='X'&&s[i]=='L')
			sum+=50;
			
		if(s[i]=='C'&&s[i+1]!='D'&&s[i+1]!='M'&&s[i-1]!='X')
			sum+=100;
		else if(s[i]=='C'&&s[i+1]=='D')
			sum+=400;
		else if(s[i]=='C'&&s[i+1]=='M')
			sum+=900;	
		else if(s[i-1]!='C'&&s[i]=='D')
			sum+=500;
		else if(s[i-1]!='C'&&s[i]=='M')
			sum+=1000;	
	}
	return sum;	
		
}

int main(){
	string x;
	int y;
	cin>>x;
	y = romanToInt(x);
	cout<<y;
	return 0;
} 
