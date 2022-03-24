package icpcsheet3;

import java.util.Arrays;

public class PlusOneOnTheSubset {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int t = in.nextInt(),lengthOfArray;
        for (int j = 0; j < t; j++) {
            lengthOfArray = in.nextInt();
            int []arr = new int[lengthOfArray];
            for (int i = 0; i < lengthOfArray; i++) 
                arr[i] = in.nextInt();
            
        
            Arrays.sort(arr);
            System.out.println(arr[(lengthOfArray-1)]-(arr[0]));
            
        }
        
    }
    
}
