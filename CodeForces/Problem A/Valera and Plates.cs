using System;
using System.Threading;

namespace CsSyntax
{
    public class Program
    {
        static void Main(string[] args)
        {
            int n, m, k;
            string s = Console.ReadLine();
            string[]ss = s.Split(' ');
            n = Convert.ToInt32(ss[0]);
            m = Convert.ToInt32(ss[1]);
            k = Convert.ToInt32(ss[2]);

            s = Console.ReadLine();
            ss = s.Split(' ');

            int type,ans=0;
            for(int i = 0; i < n; ++i)
            {
                type = Convert.ToInt32(ss[i]);

                if (type == 1)
                {
                    if (m == 0)
                        ++ans;
                    else
                        --m;
                }
                else
                {
                    if (k != 0)
                    {
                        --k;
                        continue;
                    }

                    if (m != 0)
                    {
                        --m;
                        continue;
                    }

                    ++ans;
                }
                }
            

            Console.WriteLine(ans);

        }

    }
}
