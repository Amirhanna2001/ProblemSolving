package secondsession;

public class BitPlusPlus {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int m,counter = 0;
        m = in.nextInt();
        String s;
        
        for (int i = 0; i < m; i++) {
            s = in.next();
            if(s.equals("X++")||s.equals("++X"))
                counter++;
            else
                counter--;
        }
        System.out.println(counter);
    
}

}
