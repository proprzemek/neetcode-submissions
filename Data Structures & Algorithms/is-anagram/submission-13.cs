public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length){
            return false;
        }
        string s_sorted = new string(s.OrderBy(c => c).ToArray());
        string t_sorted = new string(t.OrderBy(c => c).ToArray());
        
        return s_sorted == t_sorted;
    }
}
