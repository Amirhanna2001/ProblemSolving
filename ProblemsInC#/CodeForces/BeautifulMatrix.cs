using System;

namespace CsSyntax
{
    public class Program
    {
        static void Main(string[] args)
        {
            string[] matrix = new string[5];

            bool flag = true;
            int a = 0, b = 0;
            for (int i = 0; i < 5 && flag; ++i)
            {
                matrix[i] = Console.ReadLine();
                string[] mm = matrix[i].Split();
                for (int j = 0; j < 5; ++j)
                {
                    if (mm[j] == "1")
                    {
                        a = i;
                        b = j;
                        flag = false;
                        break;
                    }
                }
            }

            Console.WriteLine(Math.Abs(a - 2) + Math.Abs(b - 2));
        }
    }
}
