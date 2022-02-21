package icpcsheet2;

public class SoliderAndBanana {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int costPerBan = in.nextInt();
        int noOfDollar = in.nextInt();
        int noOfBananasHeWant = in.nextInt();
        int cost=1;
        for (int i = 0; i < noOfBananasHeWant; i++) {
            cost+=i*costPerBan;
        }
        if(noOfDollar<=cost)
            System.out.println("0");
        else
            System.out.println(noOfDollar-cost);
        
    }
}
