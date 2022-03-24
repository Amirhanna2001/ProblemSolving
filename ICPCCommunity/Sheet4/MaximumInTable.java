
package icpcsheet4;

import java.util.Scanner;

public class MaximumInTable {
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int [][] arr = new int[n][n];
        int max = arr[0][0];
                 
             
         
         for (int i = 0; i < arr.length; i++) {
             for (int j = 0; j < arr[0].length; j++) {
                 if(i ==0 || j ==0)
                     arr[i][j] =1;
                 else
                     arr[i][j] =arr[i-1][j] + arr[i][j-1];
                 
                 if(max<arr[i][j])
                         max = arr[i][j];
                 
             }
         }
         System.out.println(max);
        
     }
}
