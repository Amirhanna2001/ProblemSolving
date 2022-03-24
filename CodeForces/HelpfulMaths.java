package secondsession;

public class HelpfulMaths {
    
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String result = "",s = in.next();
        int numOf1=0, numOf2 =0,numOf3=0;
        for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == '1')
                numOf1++;
            else if(s.charAt(i) == '2')
                numOf2++;
            else
                if(s.charAt(i) == '3')
                    numOf3++;
        }
        for (int i = 0; i < numOf1; i++) {
            result +="1+";
        }
        
        for (int i = 0; i < numOf2; i++) {
            result +="2+";
        }
        
        for (int i = 0; i < numOf3; i++) {
            result +="3+";
        }
        for (int i = 0; i < result.length()-1; i++) {
            System.out.print(result.charAt(i));
            
        }
    }
        
}
