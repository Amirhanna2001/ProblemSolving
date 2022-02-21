package icpcsheet2;

public class NearestInterestingNumber {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int a = in.nextInt();
        int sumOfDigits = 0,tmp,num = a;
        while(true){
            tmp = num;
            while(tmp !=0){
                sumOfDigits += tmp%10;
                tmp /= 10;
            }
            if(sumOfDigits % 4 == 0)
                break;
            else
                sumOfDigits =0;
            num++;
            
        }
        System.out.println(num);
                
    }
    
}
