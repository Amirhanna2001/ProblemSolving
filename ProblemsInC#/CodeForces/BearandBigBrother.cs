using System;
namespace CsSyntax
{
    public class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            string [] input = s.Split();
            int l = Convert.ToInt32(input[0]);
            int b = Convert.ToInt32(input[1]);

            int ans = 0;

            while (l <= b)
            {
                ++ans;
                l *= 3;
                b *= 2;

            }
            Console.WriteLine(ans);
        }

    }
}