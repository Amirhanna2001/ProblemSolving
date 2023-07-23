using System;

namespace ProblemSolving
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input1 = Console.ReadLine().ToLower();
            string input2 = Console.ReadLine().ToLower();

            if (input1.CompareTo(input2) == 0)
                Console.WriteLine(0);
            else if(input2.CompareTo(input1) > 0)
                Console.WriteLine(-1);
            else 
                Console.WriteLine(1);


        }
    }
}