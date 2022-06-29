public class Team {
    public static void main(String []args){
        java.util.Scanner input = new java.util.Scanner(System.in);
        int number =0,n = input.nextInt();
        byte first, second, third ;
        if(n>=1 && n<=1000){
             for (int i = 0; i < n; i++) {
            first  = input.nextByte();
            second = input.nextByte();
            third  = input.nextByte();
            if(first+second+third >= 2)
                number++;
          }
          System.out.println(number);   
        }
        
       
    }
}
