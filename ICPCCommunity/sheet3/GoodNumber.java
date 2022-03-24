package icpcsheet3;

public class GoodNumber {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(),k=in.nextInt(),counter=0,num;
        int rem;
        for (int i = 0; i < n; i++) {
            num = in.nextInt();
            if(num%10 != 0)
                break;
//            num /=10;
            while(num>0){
                rem = num%10;
                num /= 10;
                if(rem<=k&&rem>0)
                    counter++;
                
                    
            }
               
        }
         System.out.println(counter);
    }
    
}
