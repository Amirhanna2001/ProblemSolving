package codeforces;



import java.util.TreeMap;

public class Presents {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt();
        TreeMap<Integer,Integer> mp=new TreeMap<>();
        for (int i = 1; i < n+1; i++) 
            mp.put( in.nextInt(),i);
        
        for (int i = 1; i < n+1; i++) 
            System.out.print( mp.get(i) +" ");
           
        }
    
}
