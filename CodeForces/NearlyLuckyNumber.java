package codeforces;

public class NearlyLuckyNumber {
    
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        long n = input.nextLong(),rem;
        int count=0;
        while(n!=0){
            rem = n%10;
            if(rem ==4 || rem ==7)
                count++;
            n/=10;
                
        }
        if(count ==4 || count ==7)
             System.out.println("YES");
        else
            System.out.println("NO");
        
    }
}
