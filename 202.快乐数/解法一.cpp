class Solution {
public:
    bool isHappy(int n) {
        for(int i=0;i<100;i++){
            int nown = 0;
            while(n>0){
                nown += (n%10)*(n%10);
                n/=10;
            }
            n = nown;
            if(n==1)
                return true;
        }
        return false;
    }
};
