class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        if (n != m){
            return false;
        }
         
        unordered_map<char,int> stringi;

        for(int i = 0; i < n; i++){
            stringi[s[i]]++;
            stringi[t[i]]--;
        }
        for (auto para : stringi){
            if (para.second != 0){
                return false;
            }
        }
        return true;
    }
};
