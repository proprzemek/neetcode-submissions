public class Solution {
    public bool hasDuplicate(int[] nums) {
        if(nums == null || nums.Length == 1) return false;
        List<int> Lista = new List<int>();

        foreach(int n in nums)
        {
            if(Lista.Contains(n))
            {
                return true;
            }
            else
            {
                Lista.Add(n);
            }
        }
        return false;
    }
}