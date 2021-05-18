class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26] = {0};
        for(int i=0;magazine[i];++i)
            hash[magazine[i]-'a'] +=1;
        for(int i=0;ransomNote[i];++i){
            hash[ransomNote[i]-'a'] -=1;
            if(hash[ransomNote[i]-'a']<0)
                return false;
        }
        return true;
    }
};
