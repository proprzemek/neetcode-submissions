class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> liczniki;

        for(int i = 0; i<nums.size(); i++){
            liczniki[nums[i]]++;
        }

    vector<pair<int,int>> sorted;
    for(auto para : liczniki){
        sorted.push_back({para.second, para.first});
    }

    sort(sorted.rbegin(), sorted.rend());

    vector<int> wynik;
    for(int i = 0; i<k; i++){
        wynik.push_back(sorted[i].second);
    }
    return wynik;
    }
};