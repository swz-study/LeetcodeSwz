#include<iostream>
#include<vector> 
using namespace std;

int removeElement(vector<int>& nums, int val) {
	int i=0;
	for(int j=0;j<nums.size();j++){
		if(nums[j] != val){
			nums[i] = nums[j];
			i++;
		}
	}
    return i;
}


int main(){
	vector<int> first1;
	int num1;
	while(cin>>num1){
		first1.push_back(num1);
		if(cin.get() == '\n')
			break;
	}
	int val = 0;
	cin >>val;
	int returnlen = removeElement(first1,val);
	cout<<returnlen;
	return 0;
} 
