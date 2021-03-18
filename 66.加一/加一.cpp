#include<iostream>
#include<vector> 
using namespace std;

vector<int> plusOne(vector<int>& digits) {
	int len = digits.size();
	if(digits[len-1]!=9){
		digits[len-1] +=1;
	}else{
		int count=0;
		for(int i=len-1;i>=0;i--){
			if(digits[i]==9){
				digits[i] = 0;
				count++;
			}else{
				break;
			}
		}
		if(count<=len-1)
			digits[len-count-1] +=1;
		else
			digits.insert(digits.begin(),1);
	}
	return digits;
}

int main(){
	vector<int> indig;
	int num;
	while(cin>>num){
		indig.push_back(num);
		if(cin.get()=='\n')
			break;
	}
	
	vector<int> outdig;
	outdig = plusOne(indig);
	
	for(int i=0;i<outdig.size();i++) 
		cout<<outdig[i]<<" ";
	return 0;
}
