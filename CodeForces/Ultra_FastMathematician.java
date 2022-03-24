
package codeforces;

public class Ultra_FastMathematician {
    public static void main(String []args){
        java.util.Scanner in =new java.util.Scanner(System.in);
        String s1 = in.next(),s2=in.next();
        int length = s1.length();
        
        for (int i = 0; i < length; i++) {
            if(s1.charAt(i) == s2.charAt(i))
                System.out.print("0");
            else
                System.out.print("1");
        }
    }
}
