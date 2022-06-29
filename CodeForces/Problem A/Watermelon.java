public class ICPC {

    public static void main(String[] args) {
  
         java.util.Scanner in = new java.util.Scanner(System.in);
         int x = in.nextInt();
         if(x >=1 && x<=100){
             if(x%2 == 0 && x!=2)
                 System.out.println("Yes");
             else
                 System.out.println("No");
         }
    }
    
}