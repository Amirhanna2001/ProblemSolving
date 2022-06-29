public class MultiplicationTable {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt();
        int counter = 0,number = in.nextInt();
        
        
    for (int i = 1; i <= n; i++)
        if (number % i == 0 &&number / i <= n) 
            counter++;
        
            System.out.println(counter);
        
                
    }
    
}