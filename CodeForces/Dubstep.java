/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codeforces;

/**
 *
 * @author amirh
 */
// Status:          Accepted     Time : 374 ms	
public class Dubstep {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String s = input.next();
        s = s.replaceAll("WUB", " ").trim();
        
        System.out.println(s);
    }
}
