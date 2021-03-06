class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0)
		return false; 
	int a[10]={};
	int count=0,num=0;
	while(x){
		num=x%10;
		x/=10;
		a[count++]=num; 
	}
	for(int i=0;i<count/2;i++){
		if(a[i]!=a[count-i-1])
			return false;
	}
	return true;
    }
};
