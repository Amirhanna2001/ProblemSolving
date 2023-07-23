using System;

string input = Console.ReadLine();
input = Console.ReadLine();

string[] nums = input.Split();
int[] arr = new int[nums.Length];

for (int i = 0; i < nums.Length; ++i)
{
    arr[i] = Convert.ToInt32(nums[i]);
}

Array.Sort(arr);
for (int i = 0; i < arr.Length; ++i)
{
    Console.Write(arr[i] + " ");
}
