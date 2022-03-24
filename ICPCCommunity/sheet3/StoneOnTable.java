package icpcsheet3;


public class StoneOnTable {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(),c=0;
        String s = in.next();
        
        for (int i = 0; i < n-1; i++) {
            if(s.charAt(i) == s.charAt(i+1))
                c++;
        }
        System.out.println(c);
               
    }
    
}
