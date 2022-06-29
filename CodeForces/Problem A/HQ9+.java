
public class HQ9Plus {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String s = in.next();
        boolean b =false;
        for (int i = 0; i < s.length(); i++) 
            if(s.charAt(i) >32 && s.charAt(i) <127 )
                if(s.charAt(i )== 'Q' || s.charAt(i) == 'H' || s.charAt(i) == '9'){
                    b= true;
                    break;
                }
                    
                
            
        
        if(b)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
