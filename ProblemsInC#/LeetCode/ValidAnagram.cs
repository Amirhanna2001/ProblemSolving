public class Solution {
    public  bool IsAnagram(string input1, string input2)
	{
		if (input1.Length != input2.Length)
		return false;

	char[] chars1 = new char[26];
	char[] chars2 = new char[26];

	for(int i=0;i< input1.Length;  ++i)
	{
		chars1[input1[i] - 'a']++;
		chars2[input2[i] - 'a']++;
	}
	for(int i=0; i<26; ++i)
	{
		if(chars1[i] != chars2[i])
			return false;
	}
	return true;
	}
}