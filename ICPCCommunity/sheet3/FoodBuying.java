package icpcsheet3;

public class FoodBuying {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int t = in.nextInt(),n,result,dev;
        
        for (int i = 0; i < t; i++) {
            n = in.nextInt();
            result = 0;
            while(n>0){
                if(n<10){
                    result+=n;
                    break;
                }
                    
                
                else{
                    
                    dev = n/10;
                    result += dev*10;
                    
                    n %=10;
                    n+=dev;
                }
                    
                
            }
            System.out.println(result);
        }
    }
    
}
