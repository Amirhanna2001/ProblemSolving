package icpcsheet2;

public class Soroban {
   
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int rem, num = in.nextInt();
        String result = "";
        while(num != 0){
            rem = num%10;
            switch(rem){
                case 0:
                    result += "O-|-OOOO\n";
                    break;
                
                case 1:
                    result += "O-|O-OOO\n";
                    break;
                    
                case 2:
                    result += "O-|OO-OO\n";
                    break;
                    
                case 3:
                    result += "O-|OOO-O\n";
                    break;
                    
                case 4:
                    result += "O-|OOOO-\n";
                    break;  
                    
                case 5:
                    result += "-O|-OOOO\n";
                    break; 
                    
                case 6:
                    result += "-O|O-OOO\n";
                    break;  
                    
                case 7:
                    result += "-O|OO-OO\n";
                    break;    
                    
                case 8:
                    result += "-O|OOO-O\n";
                    break;
                    
                case 9:
                    result += "-O|OOOO-\n";
                    break;    
            }
            num /=10;
        }
        System.out.println(result);
             
    }
}
