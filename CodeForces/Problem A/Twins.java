
import java.util.Arrays;
import java.util.Scanner;

public class Twin {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(),sum=0,sum2=0,ctr=0;
        int [] arr = new int [n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
            sum +=arr[i];
        }
            
           
        Arrays.sort(arr );
        for (int i = n-1; i >-1; i--) {
            if(sum2 >sum/2) break;
            ctr++;
            sum2+=arr[i];
            
        }
        System.out.println(ctr);
    }
}
