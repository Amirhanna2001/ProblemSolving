

package icpcsheet4;

import java.util.Scanner;

/**
 *
 * @author amirhanna
 */
public class DawidAndBagsOfCandies {
    
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int  a,b,c,d;
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        d = in.nextInt();
        
        
         if(a == b+c+d || b == a+c+d || c == a+b+d || d == a+c+b || a+b == c+d || a+c == b+d || a+d == b+c)   
             System.out.println("YES");
         else
             System.out.println("NO");
         
         
        
     }
}
