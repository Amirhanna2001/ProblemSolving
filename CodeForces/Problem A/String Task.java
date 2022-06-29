
public class StringTask {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String s1 = in.next().toLowerCase(),s2="";
        for (int i = 0; i < s1.length(); i++) {
            if(s1.charAt(i) == 'a'||s1.charAt(i) == 'o'||s1.charAt(i) == 'e'||s1.charAt(i) == 'u'||s1.charAt(i) == 'i'||s1.charAt(i) == 'o'||s1.charAt(i)=='y')
                continue;
            else
               s2 += "."+s1.charAt(i);
            
        }
        System.out.println(s2); 
             
        
    }
}
