class Solution {
public:
    string convertToTitle(int columnNumber) {
        string strcode;
        while(columnNumber){
            columnNumber--;
            int yu =columnNumber%26;
            columnNumber/=26;
            char mid = 'A'+yu;
            strcode = mid + strcode;
        }
        return strcode;
    }
};
