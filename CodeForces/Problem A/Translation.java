
import java.util.Scanner;

public class Translation {
    
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String s = in.next(),t=in.next();
        boolean c = true ;
        if(s.length() != t.length())
            c = false;
        
            
        
        else{
            int length = s.length();
            for (int i = 0; i <length; i++) {
                if(s.charAt(i) != t.charAt(length-1-i)){
                   c = false; 
                   break;
                }
            }
        }
        if(c)
             System.out.println("YES");
        else
             System.out.println("NO");
            
             
     }
}
