public class Solution {
    public int DistinctAverages(int[] nums)
	{
		Array.Sort(nums);

		int l= 0, r = nums.Length - 1;
		Dictionary<double, int> dict = new();
		while (l < r)
		{
			double avg = (nums[l] + nums[r]) / 2.0;
			if ( dict.ContainsKey(avg))
				{
				++dict[avg];
			}
			else
			{
				dict.Add(avg, 1);
			}

			++l;
			--r;

		}
	   
		return dict.Count;
	}
}