#include<iostream>
#include<vector>
using namespace std; 
int maxSubArray(vector<int>& nums) {
	int max = 0;
    for(int i=0;i<nums.size();i++){
    	int sumnum =-100000;
    	for(int j=i;j<nums.size();j++){
    		sumnum += nums[j];
	    	if(sumnum>max)
	    		max = sumnum;	
		}
	}
	return max;
}

int main(){
	vector<int> innums;
	int midnum;
	while(cin>>midnum){
		innums.push_back(midnum);
		if(cin.get()=='\n')
			break;
	}
	int summax = maxSubArray(innums);
	cout<<summax<<endl;
	return 0;
} 
