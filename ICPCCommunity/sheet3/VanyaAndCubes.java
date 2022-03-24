package icpcsheet3;

public class VanyaAndCubes {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(),current =0,last=0,i=0;
        while(n>0) {
            i++;
           current = last+i;
           last    = current;
           n      -= current;
           if(n<0)
               i--;
           
        }
        System.out.println(i);
        
    }
    
}
