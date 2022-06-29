
import java.util.Arrays;
import java.util.Scanner;

public class VanyaAndLanterns {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt(), len = in.nextInt();
        int[] arr = new int[n];
        boolean f1 = false, f2 = false;
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
            if (arr[i] == 0) 
                f1 = true;
            
            if (arr[i] == len) 
                f2 = true;
            

        }
        Arrays.sort(arr);
        int mx = 0;
        for (int i = 1; i < n; i++) {
            if (mx < (arr[i] - arr[i - 1])) {
                mx = arr[i] - arr[i - 1];
            }
        }
        double res = mx / 2.0;
        
        if(!f1)
            res = Math.max(res, (double)arr[0]);
        
        if(!f2)
            res = Math.max(res, (double)len-arr[n-1]);
        System.out.println(res);

    }
}
