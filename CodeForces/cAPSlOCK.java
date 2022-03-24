
package codeforces;

public class cAPSlOCK {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String s = input.next();
        int len = s.length();
        char ch;
        for (int i = 1; i < len; i++) {
            ch = s.charAt(i);
             if(Character.isLowerCase(ch)){
                System.out.println(s);
                System.exit(0);
                break;
            }
        }
           
                
        for (int i = 0; i < len; i++) {
            if(Character.isLowerCase(s.charAt(i)))
                System.out.print(Character.toUpperCase(s.charAt(i)));
            
            if(Character.isUpperCase(s.charAt(i)))
                System.out.print(Character.toLowerCase(s.charAt(i)));
        }
    }
}
