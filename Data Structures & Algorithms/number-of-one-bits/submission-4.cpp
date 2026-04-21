class Solution {
public:
    int hammingWeight(uint32_t n) {
        int jedynki = 0;

        while (n > 0) {
            
            if (n & 1) { 
                jedynki++;
            }

            n = n >> 1; 
        }
        
        return jedynki;
    }
};