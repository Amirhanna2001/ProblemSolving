
import java.util.HashSet;

public class DoggoRecoloring {
    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt();
        String s = in.next();
        
        if(n == 1)
            System.out.println("YES");
        else{
            HashSet<Character> mp = new HashSet<>();
            for (int i = 0; i < n; i++) {
                mp.add(s.charAt(i));
            }
            if(mp.size() <n)
                System.out.println("YES");
            
            else if(mp.size() == 1)
                System.out.println("YES");
            
            else
                System.out.println("NO");
        }
        
                   
    }
}
