using System;
using System.Collections.Generic;

namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int cnt = 0;
            foreach (char c in input)
                if(Char.IsLower(c)) ++cnt;

            if (cnt >= input.Length-cnt)
                Console.WriteLine(input.ToLower());
            else
                Console.WriteLine(input.ToUpper());
        }
    }
}
