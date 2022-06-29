import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author amirh
 */
public class RegistrationSystem {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map <String,Integer> mp = new HashMap<>();
        String t = null;
        mp.put(in.next(), 1);
        int m;
        System.out.println("OK");
        for (int i = 1; i < n; i++) {
            t = in.next();
            if(mp.containsKey(t)){
                m = mp.get(t);
                System.out.println(t+m);
                mp.put(t, ++m);
            }
            else{
                System.out.println("OK");
                mp.put(t, 1);
            }
        }
            
    }
        
   

}