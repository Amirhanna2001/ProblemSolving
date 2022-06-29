
public class Exam {

    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt();
        switch (n) {
            case 1:
                System.out.println("1\n1");
                break;
            case 2:
                System.out.println("1\n1");
                break;
            case 3:
                System.out.println("2\n1 3");
                break;
            case 4:
                System.out.println("4\n3 1 4 2");
                break;
            default:
                System.out.println(n);
                for (int i = 1; i <= n; i += 2) {
                    System.out.print(i + " ");
                }
                for (int i = 2; i <= n; i += 2) {
                    System.out.print(i + " ");
                }
                break;
        }

    }
}
