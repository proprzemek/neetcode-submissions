class Solution {
public:
    // ---Nadawca---
    string encode(vector<string>& strs) {
        string wynik = "";
        
        for (int i = 0; i < strs.size(); i++) {
            wynik += to_string(strs[i].size()) + "#" + strs[i];
        }
        
        return wynik;
    }

    // ---Odbiorca---
    vector<string> decode(string s) {
        vector<string> wynik;
        int i = 0;
        
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            
            int dlugosc = stoi(s.substr(i, j - i));
            
            int start_slowa = j + 1;
            
            wynik.push_back(s.substr(start_slowa, dlugosc));
            
            i = start_slowa + dlugosc;
        }
        
        return wynik;
    }
};