class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int lewy = 0;
        int prawy = heights.size() - 1;
        
        int maksymalne_pole = 0; 

        while (lewy < prawy) {
            
            int szerokosc = prawy - lewy;
            
            
            int wysokosc_wody = min(heights[lewy], heights[prawy]);
            
            
            int aktualne_pole = szerokosc * wysokosc_wody;
            
            maksymalne_pole = max(maksymalne_pole, aktualne_pole);

            if (heights[lewy] < heights[prawy]) {
                lewy++; 
            } else {
                prawy--; 
            }
        }
        
        return maksymalne_pole;
    }
};