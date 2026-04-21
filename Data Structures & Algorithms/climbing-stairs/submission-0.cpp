class Solution {
public:
    int climbStairs(int n) {

        if (n == 1) return 1;
        if (n == 2) return 2;

        int dwa_wczesniej = 1;
        int jeden_wczesniej = 2; 
        int obecny = 0;
        
        for (int i = 3; i <= n; i++) {
            obecny = dwa_wczesniej + jeden_wczesniej;
            
            dwa_wczesniej = jeden_wczesniej;
            
            jeden_wczesniej = obecny;
        }
        return obecny;
    }
};