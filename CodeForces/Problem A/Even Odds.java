
public class EvenOdds {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        
        long n = in.nextLong(),k=in.nextLong();
        
   
        if (k <= (n + 1) / 2)
        System.out.println(k * 2 - 1);
    
    else
         System.out.println((k - (n + 1) / 2) * 2);
    
    
    }
}