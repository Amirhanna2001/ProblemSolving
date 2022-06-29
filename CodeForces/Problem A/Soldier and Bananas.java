
public class SoliderAndBanana {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        
        int k = input.nextInt(),n=input.nextInt(),w=input.nextInt(),total=0;
        for (int i = 1; i <= w; i++) {
            total += i*k;
        }
        if(n<= total)
            System.out.println(total-n);
        else
            System.out.println(0);
    }
}
