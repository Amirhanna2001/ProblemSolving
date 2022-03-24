package icpcsheet3;

public class MoveBrackets {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int testCases = in.nextInt(),length,count,x;
        String s;
        for (int i = 0; i < testCases; i++) {
            length = in.nextInt();
            s = in.next();
            x = 0;count=0;
            for (int j = 0; j < length; j++) {
                if(s.charAt(j) == '(')
                    x++;
                else
                    x--;
                if(x == -1){
                    count++;
                    x=0;
                }
            }
            System.out.println(count);
        }
    }
    
}
