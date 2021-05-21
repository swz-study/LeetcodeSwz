class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int slen = s.size();
        int tlen = t.size();
        while(i<slen&&j<tlen){
            if(s[i] ==t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        if(i == slen)
            return true;
        return false;
    }
};
