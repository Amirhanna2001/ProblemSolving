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
public class ValeraAndX {
    
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        char [][] ch = new char[n][n];
        char c;
        boolean con = true;
         for (int i = 0; i < ch.length; i++) {
             for (int j = 0; j < ch.length; j++) {
                 ch[i][j] = in.next().charAt(j);
             }
             
         }
         
         c = ch[0][0];
         for (int i = 0; i < n; i++) {
             if(ch[i][i] != c){
                 con = false;
                 break;
             }
         }
         for (int i = 0 ; i <n; i++) {
             if(ch[i][n-1-i] != c){
                 con = false;
                 break;
             }
         }
             
         if(con){
             System.out.println("YES");
             
         }
         else
             System.out.println("NO");
         
                
     }
}
