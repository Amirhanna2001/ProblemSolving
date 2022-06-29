
public class ChatRoom {
    
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String s = input.next(),hello = "hello";
        int c=0;
        for (int i = 0; i < s.length(); i++) {
            if(hello.charAt(c)== s.charAt(i))
                c++;
            if(c ==5 )
                break;
            
                
        }
        if(c >= 5)
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }
    
}
