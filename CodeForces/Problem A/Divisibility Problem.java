public class DivisibilityProblem {

    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int t = in.nextInt(), a, b, c;
        for (int i = 0; i < t; i++) {
            a = in.nextInt();
            b = in.nextInt();
            
            if(a%b == 0)
                System.out.println(0);
            else{
                c = a%b;
                System.out.println(b-c);
            }

            

        }
    }
}