package icpcsheet4;

import java.util.ArrayList;
import java.util.Scanner;


public class Eleven {
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList<Integer> arr = new ArrayList<>(n);
        String s="";
        if(n ==2){
            System.out.println("OO");
            System.exit(0);
        }
            
         for (int i = 1 ; i <16; i++) 
             arr.add(fib(i));
         for (int i = 1; i <= n; i++) {
             if(arr.contains(i))
                 s+="O";
             else
                 s+="o";
             
         }
         System.out.println(s);
     }
     static int fib(int n)
    {
        int a = 0, b = 1, c;
        if (n == 0)
            return a;
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}
