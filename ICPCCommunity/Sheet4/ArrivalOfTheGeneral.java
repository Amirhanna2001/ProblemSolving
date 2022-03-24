/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package icpcsheet4;

import java.util.Scanner;

/**
 *
 * @author amirh
 */
public class ArrivalOfTheGeneral {
    
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int []a  = new int[n];
         for (int i = 0; i < n; i++) {
             a[i] = in.nextInt();
         }
         int min=a[0],max=a[0],currMin=0,currMax=0;
         for (int i = 0; i < a.length; i++) {
             if(max<a[i]){
                 max     = a[i];
                 currMax = i;
             }
             if(min>=a[i]){
                 min     = a[i];
                 currMin = i;
             }
         }
//         if(currMax == n-1 && currMin == 0)
//             System.out.println(0);
         
         if(currMax > currMin)
             System.out.println(currMax-1+n-currMin-1);
         else
             System.out.println(currMax-1+n-currMin);
     }
}
