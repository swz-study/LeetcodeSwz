class Solution {
public:
    int firstUniqChar(string s) {
        int length = s.size();
        int i=0;
        if(length == 0)
            return -1;
        int table[26] = {0};
        for(i=0;i<length;i++)
            table[s[i]-'a']++;
        for(i=0;i<length;i++){
            if(table[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
