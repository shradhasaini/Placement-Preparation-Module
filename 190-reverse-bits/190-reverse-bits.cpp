class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int b=0;
        for(int i=0; i<32; i++){
        b <<= 1;
        b |= n&1;
        n >>= 1;
        } 
        return b;
    }
 
};