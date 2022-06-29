public class InsomniaCure {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        // k, l, m, n and d, 
        
        int k = input.nextInt(),l=input.nextInt(),m=input.nextInt(),n=input.nextInt(),d=input.nextInt();
        if(k==1||l==1||m==1||n==1)
            System.out.println(d);
        else{
            int c = d;
            for (int i = 1; i <= d; i++) {
                if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                    c--;
            }
            System.out.println(c);
        }
        
    }
}