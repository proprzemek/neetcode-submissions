public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        var map = new Dictionary<int, int>();

        if(nums.Length == 0 || k == 0) return new int [0];

        foreach(int number in nums){
            if(!map.ContainsKey(number)){
                map[number] = 0;
            }
            map[number]++;
        }
        return map.OrderByDescending(x => x.Value) 
                .Take(k)
                .Select(x => x.Key)
                .ToArray();
    }
}
