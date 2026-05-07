public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> map = new Dictionary<int, int>();
        
        for(int i = 0; i < nums.Length; i++){
            int brak = target - nums[i];
            if (map.ContainsKey(brak)){
                return new int[]{map[brak], i};
            }
            map[nums[i]] = i;
        }
        return new int[0];
    }
}
