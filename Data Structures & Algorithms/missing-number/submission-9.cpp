class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int porownanie = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(porownanie != nums[i]){
                return porownanie;
            }
            porownanie++;
        }
    }
};