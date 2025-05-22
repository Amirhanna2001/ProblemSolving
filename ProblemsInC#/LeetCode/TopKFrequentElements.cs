public class Solution {
    public int[] TopKFrequent(int[] nums, int k)
    {
        List<int> list = new List<int>();
        Dictionary<int, int> dict = new Dictionary<int, int>();

        for(int i=0; i< nums.Length; i++)
        {
            dict[nums[i]] = dict.ContainsKey(nums[i]) ? dict[nums[i]] + 1 : 1;
        }
        dict = dict.OrderByDescending(x => x.Value).ToDictionary(x => x.Key, x => x.Value);
        for(int i=0;i<k; i++)
        {
            list.Add(dict.ElementAt(i).Key);
        }
        return list.ToArray();

    }
}