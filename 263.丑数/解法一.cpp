class Solution {
public:
    bool isUgly(int n) {
        if(n<=1)
            return (n==1)?true:false;
        else{
            while(n%5==0)
                n/=5;
            while(n%3==0)
                n/=3;
            while(n%2==0)
                n>>=1;
            return (n == 1)?true:false;
        }

    }
};
