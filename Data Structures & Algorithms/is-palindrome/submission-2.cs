public class Solution {
    public bool IsPalindrome(string s) {
        int lewy = 0;
        int prawy = s.Length - 1;

        while(lewy < prawy){
            while(lewy < prawy && !char.IsLetterOrDigit(s[lewy])){
                lewy++;
            }
            while(lewy < prawy && !char.IsLetterOrDigit(s[prawy])){
                prawy--;
            }
            if(char.ToLower(s[lewy]) != char.ToLower(s[prawy])){
                return false;
            }
            lewy++;
            prawy--;
        }
        return true;
    }
}
