public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length){
            return false;
        }
        string s_sorted = new string(s.OrderBy(c => c).ToArray());
        string t_sorted = new string(t.OrderBy(c => c).ToArray());
        for(int i = 0; i < s.Length; i++){
            if(s_sorted[i] != t_sorted[i]){
                return false;
            }
        }
        return true;
    }
}
