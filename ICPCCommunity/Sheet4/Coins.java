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
public class Coins {
    
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(),head=0,t=0;
        int [] arr = new int[n];
         for (int i = 0; i < arr.length; i++) {
             arr[i] = in.nextInt();
             if(arr[i] == 0)
                 head++;
             else
                t++; 
             
         }
         if(head>t)
             System.out.println(t);
         else
             System.out.println(head);
         
     }
}
