class Solution {
public:
    int hammingWeight(uint32_t n) {
        int x=0;
        while(n>0){
            if(n&1)
                x++;
            n/=2;
        }
        return x;
    }
};