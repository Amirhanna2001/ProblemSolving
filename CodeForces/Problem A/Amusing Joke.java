
import java.util.Arrays;
import java.util.Scanner;

public class NewClass {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        s += in.next();
        String s2 = in.next();
        char[] arr1 = s.toCharArray();
        char[] arr2 = s2.toCharArray();
        boolean b = true;
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        if (arr1.length == arr2.length) {
            for (int i = 0; i < arr2.length; i++) {
                if (arr1[i] != arr2[i]) {
                    b = false;
                    break;
                }

            }
        }
        else{
            System.out.println("NO");
            System.exit(0);
        }
            
                

        if (b) 
            System.out.println("YES");
        else
            System.out.println("NO");
        

    }
}
