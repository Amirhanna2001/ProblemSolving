package icpcsheet2;

public class Counting {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int a,b,counter=0;
        a = in.nextInt();
        b = in.nextInt();
        
        if(check(a) && check(b)){
            if(a<b || b>a){
                counter=1;
                for (int i = a; i < b; i++) {
                    counter++;
                }
            }
            else
                counter = 0;
                
            System.out.println(counter);
        }
        
    }
    public static boolean check(int n){
        if(n>= 1 && n<=100)
            return true;
        return false;
                    
    }
}
