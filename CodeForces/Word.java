package codeforces;

public class Word {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String word = input.next();
        int lower=0,upper=0;
        for (int i = 0; i < word.length(); i++) {
            if(Character.isLowerCase(word.charAt(i)))
                lower++;
            else
                upper++;
        }
            
        
        
       if(lower>=upper)
            System.out.println(word.toLowerCase());
       else
            System.out.println(word.toUpperCase());
        
    }
    
}
