class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lewy = 0;
        int prawy = nums.size() - 1;

        while (lewy <= prawy) {
            int srodek = lewy + (prawy - lewy) / 2;

            if (nums[srodek] == target) {
                return srodek;
            }
            if (nums[lewy] <= nums[srodek]) {
                
                if (target >= nums[lewy] && target < nums[srodek]) {
                    prawy = srodek - 1;
                } else {
                    lewy = srodek + 1;
                }
            } 
            else {

                if (target > nums[srodek] && target <= nums[prawy]) {
                    lewy = srodek + 1;
                } else {
                    prawy = srodek - 1;
                }
            }
        }
        return -1; 
    }
};