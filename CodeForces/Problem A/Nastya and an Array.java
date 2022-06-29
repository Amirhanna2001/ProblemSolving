
import java.util.HashSet;
import java.util.Scanner;

public class NastyaAndAnArray {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        HashSet<Integer> set = new HashSet();
                
        int n = in.nextInt(),num;
        
        for (int i = 0; i < n; i++) {
            num = in.nextInt();
            if(num != 0)
                set.add(num);
        }
        System.out.println(set.size());
        
    }
}
