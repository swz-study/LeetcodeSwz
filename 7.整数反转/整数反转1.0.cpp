#include<iostream>
#include<cmath>
using namespace std;

int reverse(int x)
{
	int a[64]={};
	int count=0,num,sign=0;
	long long int sum = 0;
  if(x<0){
    x=abs(x);
    sign=1;
  }
  while(x){
    num=x%10;
    x/=10;
    a[count++]=num; 
  }		
	if(count==10&&(a[count-1]!=1&&a[count-1]!=2))
		return 0; 
	for(int i=0;i<count;i++){
		sum=(sum*10+a[i]);
	}
	if(sum>INT_MAX||sum<INT_MIN)
		return 0;
	if(sign==1)
		sum-=(2*sum);
	return sum;
}

int main(){
	int x,y;
	cin>>x;
	y = reverse(x);
	cout<<y;
	return 0;
} 
