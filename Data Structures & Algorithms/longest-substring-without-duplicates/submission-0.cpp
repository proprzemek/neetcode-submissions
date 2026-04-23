class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> okno;
        int lewy = 0;
        int max_dlugosc = 0;

        for (int prawy = 0; prawy < s.length(); prawy++) {
            
            while (okno.find(s[prawy]) != okno.end()) {
                okno.erase(s[lewy]); 
                lewy++;              
            }
            
            okno.insert(s[prawy]);
            
            max_dlugosc = max(max_dlugosc, prawy - lewy + 1);
        }

        return max_dlugosc;
    }
};