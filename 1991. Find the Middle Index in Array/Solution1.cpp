#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMiddleIndex(vector<int>& nums) {
	int sum = accumulate(nums.begin(),nums.end(),0);
	int mid = 0;
	for(int i=0;i<nums.size();i++){
		if(mid*2+nums[i]==sum)
			return i;
		mid+=nums[i];
	}
	return -1;
} 
int main(){
	vector<int> nums = {4,0};
	cout<<findMiddleIndex(nums)<<endl;
	return 0;
}
