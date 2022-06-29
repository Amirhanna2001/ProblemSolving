
import java.util.HashSet;

public class BoyOrGirl {
      
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String string = in.next();
        HashSet <Character> s = new HashSet<>();
        
        for (int i = 0; i < string.length(); i++) 
            s.add(string.charAt(i));
        
        if(s.size()%2 == 1)
            System.out.println("IGNORE HIM!");
        else
            System.out.println("CHAT WITH HER!");
                
    }
           
    
}

