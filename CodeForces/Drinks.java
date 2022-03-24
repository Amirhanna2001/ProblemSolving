
package codeforces;

public class Drinks {
    public static void main(String []args){
        java.util.Scanner in =new java.util.Scanner(System.in);
        int n = in.nextInt();
        double s=0;
        for (int i = 0; i < n; i++) 
            s+=in.nextDouble();
        
        System.out.println(s/n);
    }
}
