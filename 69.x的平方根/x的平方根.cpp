#include<iostream>

using namespace std;
int mySqrt(int x) {
	if(x>1)
		for(long long int i=1;i<=x/2;i++){
			if(i*i<=x&&(i+1)*(i+1)>x)
				return i;	
		}
	else
		return x;
} 

int main(){
	int num;
	cin>>num;
	cout<<mySqrt(num)<<endl;
	return 0;
}
