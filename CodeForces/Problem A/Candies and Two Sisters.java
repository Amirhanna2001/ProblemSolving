import java.util.Scanner;

public class CandiesAndTwoSisters {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt(),n;
        for (int s = 0; s < t; s++) {
            n = in.nextInt();
            if(n == 1 || n == 2)
                System.out.println(0);
            else {
                if(n %2 == 0)
                    n--;
                System.out.println(n/2);
            }
        }
    }
}