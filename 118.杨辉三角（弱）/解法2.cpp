#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
vector<vector<int>>	generate(int numRows){
	vector<vector<int>> midvec={{1},{1,1}};
	vector<int> midvec3={1,1};
	int midnum2 = 2;
	int midnum;												     
	if(numRows==1)											
		return {{1}};											
	else if(numRows == 2)						
		return {{1},{1,1}};
	else{
		while(midnum2<numRows){
			vector<int> midvec2={1,1};
			for(int i=0;i<midnum2-1;i++){ //0 1 2 
				midnum = midvec3[i]+midvec3[i+1];//2
				midvec2.insert(midvec2.begin()+i+1,midnum);
			}
			midvec3 = midvec2;
			midnum2++;
			midvec.push_back(midvec3);
		}
	}
	return midvec;
}
int main(){
	vector<vector<int>> out;
	out = generate(5); 
		for(auto i:out){
			for(auto j:i)
				cout<<j<<" ";
			cout<<endl;
	
		}
	return 0;
}
