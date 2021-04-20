class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()==0)
            return true;
        int i = 0;
        while(i<s.length()){
            if(s.find(s[i])!= t.find(t[i]))
                return false;
            i++;
        }
        return true;

    }
};
