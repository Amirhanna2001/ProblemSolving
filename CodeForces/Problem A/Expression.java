public class Expression {
     public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int a = in.nextInt(),b=in.nextInt(),c=in.nextInt();
        int exp1=a+b+c;
	int exp2=a*b*c;
	int exp3=a+b*c;
	int exp4=a*b+c;
	int exp5=a*(b+c);
	int exp6=(a+b)*c;
         System.out.println(Math.max(exp1, Math.max(exp2, Math.max(exp3, Math.max(exp4, Math.max(exp5, exp6))))));
    }
}