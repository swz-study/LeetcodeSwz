#include<iostream>
using namespace std;
#include<algorithm>
string addBinary(string a, string b) {
	string retstr="";
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int alen = a.size();
	int	blen = b.size();
	int n =max(a.size(),b.size());
	int currnum = 0;
	for(int i=0;i<n;i++){
		currnum +=i<alen?a[i] == '1':0;
		currnum +=i<blen?b[i] == '1':0;
		
		retstr.push_back(currnum%2?'1':'0');
		currnum/=2;
	}
	if(currnum)
		retstr.push_back('1');
	reverse(retstr.begin(),retstr.end());
	return retstr;
	
}

int main(){
	string a,b;
	cin>>a>>b;
	string retstr = addBinary(a,b);
	cout<<retstr<<endl; 
	
}
