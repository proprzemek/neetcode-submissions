class Solution {
    bool szukajDalej(vector<vector<char>>& board, const string& word, int wiersz, int kolumna, int indeks_litery) {
        
        if (indeks_litery == word.size()) {
            return true;
        }
        
        if (wiersz < 0 || wiersz >= board.size() || 
            kolumna < 0 || kolumna >= board[0].size() || 
            board[wiersz][kolumna] != word[indeks_litery]) {
            return false;
        }
        
    
        char oryginalna_litera = board[wiersz][kolumna]; 
        board[wiersz][kolumna] = '*';                 
        bool znaleziono = szukajDalej(board, word, wiersz + 1, kolumna, indeks_litery + 1) || 
                          szukajDalej(board, word, wiersz - 1, kolumna, indeks_litery + 1) || 
                          szukajDalej(board, word, wiersz, kolumna + 1, indeks_litery + 1) || 
                          szukajDalej(board, word, wiersz, kolumna - 1, indeks_litery + 1);  
                          
        board[wiersz][kolumna] = oryginalna_litera;
        
        return znaleziono;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int wiersze = board.size();
        int kolumny = board[0].size();
        
        for (int r = 0; r < wiersze; r++) {
            for (int c = 0; c < kolumny; c++) {

                if (board[r][c] == word[0]) {
                    if (szukajDalej(board, word, r, c, 0)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};