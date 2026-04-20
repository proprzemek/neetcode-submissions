class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Mapa przechowująca: wartość liczby -> jej indeks w tablicy
        unordered_map<int, int> widziane;
        
        for (int i = 0; i < nums.size(); i++) {
            // Obliczamy, jakiej liczby nam brakuje do osiągnięcia celu
            int brakujaca_liczba = target - nums[i];
            
            // Sprawdzamy, czy nasza brakująca liczba jest już w mapie
            if (widziane.count(brakujaca_liczba) > 0) {
                // widziane[brakujaca_liczba] to indeks starszej liczby, a 'i' to nasz obecny
                return {widziane[brakujaca_liczba], i};
            }
            
            // Jeśli nie znaleźliśmy pary, dodajemy obecną liczbę i jej indeks do mapy
            widziane[nums[i]] = i;
        }
        
        return {};
    }
};