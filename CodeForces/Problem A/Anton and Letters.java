import java.util.HashSet;

public class AntonAndLetters {
     public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        HashSet <Character> set = new HashSet<>();
        
        String s = input.nextLine();
        int len = s.length();
         for (int i = 1; i < len-1; i++) {
             if(s.charAt(i) != ' ' && s.charAt(i) != ','){
                 set.add(s.charAt(i));
             }
                  
         }
         System.out.println(set.size());
        
    }
}
