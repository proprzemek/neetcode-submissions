class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int wynik = 1;
        int aktualny = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            
            if (nums[i] == nums[i - 1] + 1) {
                aktualny++;
            } 
            else {
                wynik = max(wynik, aktualny);
                aktualny = 1;              
            }
        }
        
        return max(wynik, aktualny);
    }
};