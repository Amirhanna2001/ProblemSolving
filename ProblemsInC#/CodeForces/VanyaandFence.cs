using System;
namespace CsSyntax
{
    public class Program
    {
        static void Main(string[] args)
        {


            int n, h,x,ans=0;
            string s = Console.ReadLine();
            string[] ss = s.Split();
            n = Convert.ToInt32(ss[0]);
            h = Convert.ToInt32(ss[1]);

            s = Console.ReadLine();
            ss = s.Split(' ');

            for(int i = 0; i < n; ++i)
            {
                x = Convert.ToInt32(ss[i]);
                if (x > h)
                    ans += 2;
                else
                    ++ans;
            }
            Console.WriteLine(ans);

        }

    }
}