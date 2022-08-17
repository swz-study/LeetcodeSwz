#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target){
	for(int i = 0;i<nums.size();i++){
		if(nums[i] == target)
			return i;
		if(nums[nums.size()-i-1]==target)
			return nums.size()-i-1;
	}
	return -1;
}
int main(){
	vector<int> nums = {-1,0,3,5,9,12};
	int target = 2;
	int pos = search(nums,target);
	cout<<pos<<endl;
	return 0; 
}
