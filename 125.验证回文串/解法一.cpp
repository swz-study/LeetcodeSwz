class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
    int len = str.length();
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            return false;
        }
    }

    return true;
    }
};
