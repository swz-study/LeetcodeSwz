class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1);
        res[0] = 1;
        for(int j=1;j<=rowIndex;j++){
            for(int i = j;i>=0;i--)
                res[i] = (i-1>=0?res[i-1]:0)+res[i];
        }
          return res;
    }
  
};
