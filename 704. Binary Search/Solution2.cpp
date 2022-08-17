#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target){
	int left = 0;
	int right = nums.size();
	while(left<right){
		int mid = left + ((right-left)>>1);
		if(nums[mid]>target)
			right = mid;
		else if(nums[mid]<target)
			left = mid+1;	
		else
			return mid;
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
