class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t wynik = 0;
        
        for (int i = 0; i < 32; i++) {

            uint32_t bit = n & 1;

            wynik = wynik << 1;

            wynik = wynik | bit;
            
            n = n >> 1;
        }
        
        return wynik;
    }
};