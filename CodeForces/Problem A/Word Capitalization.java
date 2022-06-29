
public class WordCapitalization {
      
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String tmp ="",word = in.nextLine();
        
        for (int i = 0; i < word.length(); i++) {
            if(i == 0){
                tmp += word.charAt(i);
                tmp = tmp.toUpperCase();
            }
            else
                tmp+=word.charAt(i);
                
        }
        
        System.out.println(tmp);
                
    }
    
}
