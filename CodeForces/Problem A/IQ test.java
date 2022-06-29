
import java.util.Scanner;

public class IQTest {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int []arr = new int[n];
        int even=0,odd=0,evin = 0,odin = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
            if(arr[i] %2 == 0){
                even++;
                evin = i+1;
            }
            else{
                odd++;
                odin = i+1;
            }
                
                
        }
        if(even==1)
            System.out.println(evin);
        else
            System.out.println(odin);
        
    }
}
