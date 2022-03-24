package secondsession;

public class PetyaAndStrings {
      
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String s1, s2 ;
        s1 = in.next().toLowerCase();
        s2 = in.next().toLowerCase();
        if(s1.compareToIgnoreCase(s2) >0)
            System.out.println("1");
        else if(s1.compareToIgnoreCase(s2) <0)
            System.out.println("-1");
        else
            System.out.println("0");
            
    }


    

}
