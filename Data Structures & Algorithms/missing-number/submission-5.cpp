class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int oczekiwana_suma = n * (n + 1) / 2;
        int faktyczna_suma = 0;
        for (int i = 0; i < n; i++) {
            faktyczna_suma += nums[i];
        }
        return oczekiwana_suma - faktyczna_suma;
    }
};