class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> wynik(n, 1);

        int lewa = 1;
        for (int i = 0; i < n; i++) {
            wynik[i] = lewa;     
            lewa = lewa * nums[i]; 
        }

        int prawa = 1;
        for (int i = n - 1; i >= 0; i--) {
            wynik[i] = wynik[i] * prawa;
            prawa = prawa * nums[i]; 
        }
        
        return wynik;
    }
};