class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> wynik;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                break;
            }

            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int lewy = i + 1;
            int prawy = nums.size() - 1;

            while (lewy < prawy) {
                int suma = nums[i] + nums[lewy] + nums[prawy];

                if (suma > 0) {
                    prawy--;
                } 
                else if (suma < 0) {
                    lewy++;
                } 
                else {
                    wynik.push_back({nums[i], nums[lewy], nums[prawy]});

                    lewy++;
                    
                    while (lewy < prawy && nums[lewy] == nums[lewy - 1]) {
                        lewy++;
                    }
                }
            }
        }
        
        return wynik;
    }
};