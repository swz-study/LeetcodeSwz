#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
            if(nums[i]>=target)
                return i;
	    return nums.size();
} 
int main(){
	vector<int> innums;
	int num;
	while(cin>>num){
		innums.push_back(num);
		if(cin.get() == '\n')
			break;
	}
	int target;
	cin>>target;
	int returnlen = searchInsert(innums, target);
	cout<<returnlen;
	return 0;
}
