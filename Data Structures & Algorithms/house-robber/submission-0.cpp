
class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1 = 0;
        int rob2 = 0;

        for (int n : nums) {
            int obecny_max = max(rob1 + n, rob2);

            rob1 = rob2;
            rob2 = obecny_max;
        }
        return rob2;
    }
};