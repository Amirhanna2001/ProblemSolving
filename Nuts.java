package icpcsheet2;

public class Nuts {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int result = 0,tmp, n = in.nextInt();
        for (int i = 0; i < n; i++) {
            tmp = in.nextInt();
            if(tmp >10)
                result +=(tmp-10);
        }
        System.out.println(result);
    }
    
}
