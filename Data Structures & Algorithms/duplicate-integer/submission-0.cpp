class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Tworzymy nasz "zbiór", w którym będziemy zapisywać widziane już liczby
        unordered_set<int> widziane;
        
        for (int i = 0; i < nums.size(); i++) {
            
            // Funkcja .count() w secie zwraca 1, jeśli element już tam jest, lub 0 jeśli go nie ma
            if (widziane.count(nums[i]) > 0) {
                return true; // Znaleźliśmy duplikat, od razu przerywamy i zwracamy prawdę!
            }
            
            // Jeśli liczby jeszcze nie było, dodajemy ją do naszego zbioru
            widziane.insert(nums[i]);
        }
        
        // Jeśli pętla doszła do samego końca, to znaczy, że nie było żadnych duplikatów
        return false;
    }
};