package icpcsheet2;

public class BearAndBigBrother {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int a,b,years = 0;
        a = in.nextInt();
        b = in.nextInt();
        
        while(a<=b){
            a *=3;
            b *=2;
            years++;
        }
        System.out.println(years);
    }
    
}
