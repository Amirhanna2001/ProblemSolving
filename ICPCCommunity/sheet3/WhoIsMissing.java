package icpcsheet3;

public class WhoIsMissing {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(),num;
        int []arr = new int[n*4-1];
        for (int i = 0; i < arr.length; i++) {
            num = in.nextInt();
            arr[num-1] +=1;
            
        }
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == 3){
                System.out.println(i+1);
                break;
            }
                
            
            
        }
    }
}