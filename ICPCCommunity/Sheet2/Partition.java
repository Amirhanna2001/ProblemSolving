package icpcsheet2;



public class Partition {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt();
        int B=0,C=0,tmp;
        for (int i = 0; i < n; i++) {
            tmp=in.nextInt();
            if(tmp >0)
                B+=tmp;
            else
                C+=tmp;
        }
        System.out.println(B-C);
    }
    
}
