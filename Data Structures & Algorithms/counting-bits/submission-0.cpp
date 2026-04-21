class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> wynik(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            wynik[i] = wynik[i >> 1] + (i & 1);
        }
        
        return wynik;
    }
};