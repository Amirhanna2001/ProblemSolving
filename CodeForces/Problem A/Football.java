
public class Football {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String s = in.next();
        int count = 1;
        for (int i = 0; i < s.length()-1; i++) {
            if(s.charAt(i) == s.charAt(i+1)){
                count++;
                if(count == 7){
                    System.out.println("YES");
                    break;
                }
                        
            }
            else
                count=1;
                
        }
        if(count !=7)
            System.out.println("NO");
    }
    
}
