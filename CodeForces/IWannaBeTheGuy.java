package codeforces;

import java.util.HashSet;


public class IWannaBeTheGuy {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        int n = input.nextInt();
        HashSet<Integer> set = new HashSet<>();
        int p = input.nextInt();
        for (int i = 0; i < p; i++) {
            set.add(input.nextInt());
        }
         p = input.nextInt();
        for (int i = 0; i < p; i++) {
            set.add(input.nextInt());
        }
        
        if(set.size() == n)
            System.out.println("I become the guy.");
                 
        else
            System.out.println("Oh, my keyboard!");
        
        
        
    }
}
