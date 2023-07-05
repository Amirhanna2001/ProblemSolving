using System;
namespace CsSyntax
{
    public class Program
    {
        static void Main(string[] args)
        {
            int n =Convert.ToInt32( Console.ReadLine());
            string s;
            string[] ss = new string[3] ;

            int ans = 0;
            int sum = 0;
            for (int i = 0; i < n; ++i)
            {
                sum = 0;
                s = Console.ReadLine();
                ss = s.Split();
                sum += Convert.ToInt32(ss[0]);
                sum += Convert.ToInt32(ss[1]);
                sum += Convert.ToInt32(ss[2]);

                if (sum >= 2) ++ans;
            }
            Console.WriteLine(ans);
        }

    }
}