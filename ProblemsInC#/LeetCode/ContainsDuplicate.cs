public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        HashSet<int> set = new HashSet<int>();
        for(int i=0; i<nums.Length; i++)
            set.Add(nums[i]);

        if(set.Count == nums.Length)
            return false;
        else
            return true;
    }
    
}