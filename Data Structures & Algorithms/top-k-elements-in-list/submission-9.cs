public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        var map = new Dictionary<int, int>();


        foreach(int number in nums){
            if(!map.ContainsKey(number)){
                map[number] = 0;
            }
            map[number]++;
        }
        return map.OrderByDescending(x => x.Value) .Take(k) .Select(x => x.Key) .ToArray();
    }
}
