using System;
namespace CsSyntax
{
    public class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int n = Convert.To(s);
            s = Console.ReadLine();
            int a=0,d=0;
            for(int i=0;i<n;++i){
                if(s[i] == 'A')++a;
                else ++d;

            }
            if(a>d)
                Console.WriteLine("Anton");
            else if(d>a)
                Console.WriteLine("Danik");
            else
                Console.WriteLine("Friendship");
        }

    }
}