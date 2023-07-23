ususing System;
namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num = Convert.ToInt32(Console.ReadLine());
            string s1 ="";
            string s2;
            int ans = 0;
            for(int i= 0; i < num; ++i)
            {
                s2 = Console.ReadLine();
                if (s1 != s2) ++ans;
                s1 = s2;
            }
                Console.WriteLine(ans);
        }
    }
}
