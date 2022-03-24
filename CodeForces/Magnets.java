package codeforces;


public class Magnets {
    
    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt();
        int []arr=new int[n];
        char [] ch = new char[2*n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
            
        }
        int t =0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]%10 == 1){
                ch[t++] ='+';
                ch[t++] ='-';
                
            }
            else{
                ch[t++] ='-';
                ch[t++] = '+';
                
            }
                
                
            
        }
        int c = 1;
        for (int i = 1; i < ch.length; i++) {
            if(ch[i] == ch[i-1]){
                c++;
            }
            
        }
        System.out.println(c);
    }
        

        
        
}
