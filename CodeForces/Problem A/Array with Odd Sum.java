
public class ArrayWiithOddSum {

    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);

        int testCases = in.nextInt(), sum, num, even, odd;
        for (int i = 0; i < testCases; i++) {
            even = odd = 0;
            int numOfElements = in.nextInt();
            sum = 0;
            for (int j = 0; j < numOfElements; j++) {
                num = in.nextInt();
                sum += num;
                if (num % 2 == 1) {
                    odd++;
                } else {
                    even++;
                }
            }
            if (sum % 2 == 1 || (even > 0 && odd > 0)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}