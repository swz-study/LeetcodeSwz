class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //二进制的本质
        uint32_t ans = 0;
        int i=32;
        while(i--){
            ans<<=1;
            ans+=n&1;
            n>>=1;
        }
        return ans;
    }
};
