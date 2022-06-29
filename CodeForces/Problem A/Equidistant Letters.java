
import java.util.Arrays;

public class EquidistantLetters {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int t = in.nextInt();
        String s ;
        while(t>0){
            s = in.next();
            char []arr= s.toCharArray();
            Arrays.sort(arr);
            
            t--;
            System.out.println(arr);
        }
    }
}
