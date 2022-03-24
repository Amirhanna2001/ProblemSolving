package icpcsheet4;

import java.util.Arrays;


public class PolycarpTraining {
    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int s = in.nextInt(),count=1;
        int [] arr = new int[s]; 
        for (int i = 0; i < s; i++) 
            arr[i] = in.nextInt();
           
        Arrays.sort(arr);
        int max = arr[0];
        for (int i = 0; i < s; i++) {
            if(arr[i] >max){
                count++;
                max = arr[i];
            }
                
        }
        System.out.println(count);
        
    }
    
}
