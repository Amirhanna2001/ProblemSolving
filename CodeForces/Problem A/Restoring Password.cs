using System;
using System.Threading;

namespace CsSyntax
{
    public class Program
    {
        static void Main(string[] args)
        {
            string line = Console.ReadLine();//80 char
            string[] nums = new string[10];

            for(int i = 0; i < 10; ++i) nums[i] = Console.ReadLine();

            string[] arr = new string[8];

            for(int i = 0,j=0; i < 8; ++i,j+=10) arr[i]=line.Substring(j , 10);

            for(int i = 0; i < 8; ++i)
            {
                for(int j = 0; j < 10; ++j)
                {
                    if (arr[i] == nums[j])
                        Console.Write(j);
                }
            }

        }

    }
}
