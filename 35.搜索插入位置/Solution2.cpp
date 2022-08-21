#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums,int target){
	int left = 0,right = nums.size();
	int time = 0 ;
	while(left<right){
		int mid=left + ((right-left)>>1);
		if(target<nums[mid]){
			
			right = mid;
		}
		else if(target>nums[mid]){
			left = mid+1; 
		}
		else
			return mid;		
	}
	return left;
	
} 
int main(){
	vector<int> varies = {1,3,5,6};
	int target = 2;
	cout<<searchInsert(varies,target);	
	return 0;
}
