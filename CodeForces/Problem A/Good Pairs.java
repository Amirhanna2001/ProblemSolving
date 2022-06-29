
import java.util.Scanner;

/**
 *
 * @author amirh
 */
public class test {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt(),n;
        boolean b ;
        for (int i = 0; i < t; i++) {
            b = true;
            n = in.nextInt()+1;
            int [] arr = new int[n];
            n--;
            int min ,max,mx = 1,mn = 1;
            for (int j = 1; j <= n; j++) {
                arr[j] = in.nextInt();
            }
            min = max = arr[1];
            for (int j = 1; j <=n; j++) {
                if(min>arr[j]){
                    min = arr[j];
                    mn = j;
                }
                    
                if(max<arr[j]){
                     max = arr[j];
                     mx = j;
                }
                   
            }
            System.out.println(mn + " " + mx);
        }
    }
}
