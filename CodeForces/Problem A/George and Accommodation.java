
public class GeorgeAndAccommodation {

    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(), a, b, c = 0;
        for (int i = 0; i < n; i++) {
            a = in.nextInt();
            b = in.nextInt();
            if (b - a >= 2) {
                c++;
            }
        }
        System.out.println(c);
    }
}
