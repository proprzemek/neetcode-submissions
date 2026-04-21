class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> liczniki;
        for (int i = 0; i < nums.size(); i++) {
            liczniki[nums[i]]++; 
        }
        
        vector<pair<int, int>> posortowane;
        
        for (auto para : liczniki) {
            posortowane.push_back({para.second, para.first});
        }
        
        sort(posortowane.rbegin(), posortowane.rend());
        
        vector<int> wynik;
        for (int i = 0; i < k; i++) {
            wynik.push_back(posortowane[i].second);
        }
        
        return wynik;
    }
};