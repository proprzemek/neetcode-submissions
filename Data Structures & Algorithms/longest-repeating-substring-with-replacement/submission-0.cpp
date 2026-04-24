class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> licznik(26, 0); 
        
        int lewy = 0;
        int max_dlugosc = 0;
        int max_czestotliwosc = 0;

        for (int prawy = 0; prawy < s.length(); prawy++) {
            licznik[s[prawy] - 'A']++;
            max_czestotliwosc = max(max_czestotliwosc, licznik[s[prawy] - 'A']);

            int dlugosc_okna = prawy - lewy + 1;
            
            int liter_do_podmiany = dlugosc_okna - max_czestotliwosc;

            while (liter_do_podmiany > k) {

                licznik[s[lewy] - 'A']--;
                lewy++;

                dlugosc_okna = prawy - lewy + 1;
                liter_do_podmiany = dlugosc_okna - max_czestotliwosc;
            }

            max_dlugosc = max(max_dlugosc, prawy - lewy + 1);
        }

        return max_dlugosc;
    }
};