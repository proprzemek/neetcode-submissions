public class Solution {
    public List<List<string>> GroupAnagrams(string[] strs) {
        var map = new Dictionary<string, List<string>>();

        foreach (string s in strs) {
            char[] znaki = s.ToCharArray();
            Array.Sort(znaki);
            
            string klucz = new string(znaki);
            if (!map.ContainsKey(klucz)) {
                map[klucz] = new List<string>();
            }
            map[klucz].Add(s);
        }
        return map.Values.ToList();
    }
}