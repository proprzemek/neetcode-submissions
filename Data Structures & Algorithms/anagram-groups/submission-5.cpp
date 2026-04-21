class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // 1. Tworzymy mapę: Etykieta (posortowane słowo) -> Lista oryginalnych słów
        unordered_map<string, vector<string>> szuflady;
        
        for (int i = 0; i < strs.size(); i++) {
            
            string oryginalne_slowo = strs[i];
            string klucz = oryginalne_slowo; // Tworzymy kopię roboczą
            
            // Sortujemy kopię. "cat" staje się "act". 
            sort(klucz.begin(), klucz.end());
            
            // push_back dodaje nasze oryginalne_slowo na koniec listy w tej szufladzie.
            szuflady[klucz].push_back(oryginalne_slowo);
        }
        
        vector<vector<string>> wynik;
        
        // Przechodzimy przez naszą mapę (szuflady) i wyciągamy tylko listy słów (czyli para.second)
        for (auto para : szuflady) {
            wynik.push_back(para.second);
        }
        
        return wynik;
    }
};