class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int lewy = 0;
        int prawy = s.size() - 1;
        while(lewy < prawy){
            while(lewy < prawy && !isalnum(s[lewy])){
                lewy++;
            }
            while(lewy < prawy && !isalnum(s[prawy])){
                prawy--;
            }

            if(tolower(s[lewy]) != tolower(s[prawy])){
                return false;
            }
            lewy++;
            prawy--;
        }
        return true;
    }
};
