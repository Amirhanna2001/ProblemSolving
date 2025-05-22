public class Solution {
public int StrStr(string haystack, string needle)
{
    if (string.IsNullOrEmpty(needle) || string.IsNullOrEmpty(haystack))
        return -1;

    int n = needle.Length;
    for (int i = 0; i < haystack.Length; ++i)
    {
        if (haystack[i] == needle[0] && (haystack.Length - i) >= n)
        {
            if (haystack.Substring(i, n) == needle)
            {
                return i;
            }
        }
		// another solution 
        //return haystack.IndexOf(needle); 
    }
    return -1;
}
}