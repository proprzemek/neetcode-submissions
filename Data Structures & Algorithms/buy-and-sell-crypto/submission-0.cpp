class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        
        int najtanszy_zakup = prices[0];
        int maksymalny_zysk = 0;
        
        for(int i = 0; i < prices.size(); i++) {
            
            if (prices[i] < najtanszy_zakup) {
                najtanszy_zakup = prices[i];
            } 
            else {
                int obecny_zysk = prices[i] - najtanszy_zakup;
                
                if (obecny_zysk > maksymalny_zysk) {
                    maksymalny_zysk = obecny_zysk;
                }
            }
        }
        
        return maksymalny_zysk;
    }
};