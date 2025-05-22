public class Solution
{
    public int LongestConsecutive(int[] nums)
    {

        int res = 0;

        HashSet<int> set = new (nums);

        foreach (int num in set)
        {
            if (set.Contains(num - 1))
            {
                continue;
            }

            int longest = 1;
            int current = num;
            while (set.Contains(current + 1))
            {
                ++longest;
                ++current;
            }

            res = res > longest ? res : longest;

        }
            return res;
    }
}