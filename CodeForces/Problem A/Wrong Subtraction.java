
public class WrongSubtraction {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        int n = input.nextInt(),k=input.nextInt(),rem;
    
        for (int i = 0; i < k; i++) {
            rem = n%10;
            if(rem >0)
                n--;
            else{
                n /=10;
//                n--;
            }
                
        }
        System.out.println(n);
    }
}
