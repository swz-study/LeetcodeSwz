class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        for(auto i:t)
            sum+=i;
        for(auto j:s)
            sum-=j;
        return sum;

    }
};
