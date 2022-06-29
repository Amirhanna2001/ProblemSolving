
public class IsYourHorseshoeOnTheOtherHoof {
     public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        java.util.HashSet<Integer> horseshoe = new java.util.HashSet<>();
         for (int i = 0; i < 4; i++) 
             horseshoe.add(in.nextInt());
         
         System.out.println(4-horseshoe.size());
    }
}
s