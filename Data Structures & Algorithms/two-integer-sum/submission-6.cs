public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int,int> map = new Dictionary<int,int>();

        for(int i = 0; i < nums.Length; i++){
            int missing = target - nums[i];
            if(map.ContainsKey(missing)){
                return new int[]{map[missing], i};
            }
            map[nums[i]] = i;
        }
        return new int[0];
    }
}
