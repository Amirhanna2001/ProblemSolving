using System;
using System.Collections.Generic;

namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string userName = Console.ReadLine();
            HashSet<char> chars = new();
            foreach (char c in userName)
             chars.Add(c);

            if (chars.Count % 2 == 0)
                Console.WriteLine("CHAT WITH HER!");
            else
                Console.WriteLine("IGNORE HIM!");
        }
    }
}
