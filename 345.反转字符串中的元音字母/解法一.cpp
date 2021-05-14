class Solution {
public:
    string reverseVowels(string s) {
        int i = 0,j = s.size()-1;
        string tool = "aeiouAEIOU";
        while(i<j){
            while(tool.find(s[i])==-1&&i<j)
                ++i;
            while(tool.find(s[j])==-1&&i<j)
                --j;
            if(i<j)
                swap(s[i++],s[j--]);
        }
        return s;

    }
};
