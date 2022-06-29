
import java.util.HashSet;
import java.util.Scanner;

/**
 *
 * @author amirh
 */
public class Pangram {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s = in.next().toLowerCase();
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            set.add(s.charAt(i));
        }
        if(set.size() == 26)
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }
}