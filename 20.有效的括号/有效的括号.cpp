#include<iostream>
using namespace std;
#include<stack>
bool isValid(string s){
	stack<char> stk;
	if(s.length()%2!=0)
		return false;
	for(int i=0;i<s.length();i++){
		if(s[i] == '('||s[i]=='{'||s[i]=='['){
			stk.push(s[i]);
		}else if(s[i] == ')'){
			if(stk.empty()||stk.top()!='(')
				return false;
			else
				stk.pop();
		}else if(s[i] == '}'){
			if(stk.empty()||stk.top()!='{')
				return false;
			else
				stk.pop();
		}else if(s[i] == ']'){
			if(stk.empty()||stk.top()!='[')
				return false;
			else
				stk.pop();
		}
	}
	if(!stk.empty())
		return false;
	return true;
}


int main(){
	string instr;
	cin>>instr;
	bool judge = isValid(instr);
	cout<<judge<<endl;
	return 0; 
} 
