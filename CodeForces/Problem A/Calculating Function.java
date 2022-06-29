public class Main{
     public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        long n = in.nextLong();
        long a;
         if(n % 2 == 0) a = n / 2;
        else a = ((n + 1) / 2) * (-1);
         System.out.println(a);
         
         
     }
}
