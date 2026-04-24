class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') {
                    continue;
                }

                int wartosc = board[r][c] - '1';

                int numer_kwadratu = (r / 3) * 3 + (c / 3);

                if (rows[r][wartosc] || cols[c][wartosc] || boxes[numer_kwadratu][wartosc]) {
                    return false; 
                }

                rows[r][wartosc] = true;
                cols[c][wartosc] = true;
                boxes[numer_kwadratu][wartosc] = true;
            }
        }
        return true;
    }
};