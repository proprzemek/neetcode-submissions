class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> wynik;
        vector<int> obecna;
        szukaj(0, target, nums, obecna, wynik);
        return wynik;
    }

    private:
    void szukaj(int indeks, int cel, vector<int>& nums, vector<int>& obecna, vector<vector<int>>& wynik){
        if(cel == 0){
            wynik.push_back(obecna);
            return;
        }
        if( cel < 0 || indeks >= nums.size()){
            return;
        }
        obecna.push_back(nums[indeks]);
        szukaj(indeks, cel - nums[indeks], nums, obecna, wynik);
        obecna.pop_back();
        szukaj(indeks + 1, cel, nums, obecna, wynik);
    }
};
