class Solution {
public:
    int findMin(vector<int> &nums) {
        int lewy = 0;
        int prawy = nums.size() - 1;
        while(lewy<prawy){
            int srodek = lewy + (prawy - lewy) / 2;

            if(nums[srodek] > nums[prawy]){
                lewy = srodek + 1;
            }
            if(nums[srodek] <= nums[prawy]){
                prawy = srodek;
            } 
        }
        return nums[lewy];
    }
};
