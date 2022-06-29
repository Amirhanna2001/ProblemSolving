
import java.util.Scanner;

/**
 *
 * @author amirh
 */
public class FoxAndSnake {
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(),m=in.nextInt(),r=1;
        boolean b = true;
         for (int i = 1; i <= n; i++) {
             if(i%2 ==1){
                 for (int j = 0; j < m; j++) {
                     System.out.print("#");
                 }
                 System.out.println("");
                 r++;
                 continue;
             }
             else if(r%2 ==0 && b){
                 for (int j = 1; j < m; j++) {
                     System.out.print(".");
                 }
                 System.out.println("#");
                 r++;
                 b = false;
                 continue;
             } 
             else if(r%2 ==0 && !b){
                 System.out.print("#");
                 for (int j = 1; j < m; j++) {
                     System.out.print(".");
                 }
                 System.out.println("");
                 r++;
                 b = true;
                 continue;
             } 
             System.out.println("");
         }
     }
}
