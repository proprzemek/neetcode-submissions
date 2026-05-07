
public class Solution {
    public bool IsValid(string s) {
        Stack<char> stos = new Stack<char>();

        foreach (char c in s) {
            if (c == '(') stos.Push(')');
            else if (c == '{') stos.Push('}');
            else if (c == '[') stos.Push(']');
            else {
                if (stos.Count == 0 || stos.Pop() != c) {
                    return false;
                }
            }
        }

        return stos.Count == 0;
    }
}