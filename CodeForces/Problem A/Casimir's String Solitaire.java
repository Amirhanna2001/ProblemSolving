
public class CasimirStringSolitaire {
   
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int cases = in.nextInt();
        String s;
        for (int i = 0; i < cases; i++) {
            int a=0,b=0,c=0;
            s = in.next();
            if(s.length()%2 ==1){
                System.out.println("NO");
                continue;
            }
            else{
                
                for (int j = 0; j < s.length(); j++) {
                    switch(s.charAt(j)){
                        case'A':
                                a++;
                                break;
                        case'B':
                                b++;
                                break;
                        case'C':
                                c++;
                                break;        
                    }
                    
                }
                if(b == (a+c))
                    System.out.println("YES");
                else
                    System.out.println("NO");
            }
                
        }
    }
}
