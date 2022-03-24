
package icpcsheet2;
public class CaseOfTheZerosAndOnes {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int numOfZeros=0,numOfOnes=0,length;
        length = in.nextInt();
        String number ;
        number = in.next();
        
        for (int i = 0; i < length; i++) {
            if('0' == number.charAt(i))
               numOfZeros++;
            else
                numOfOnes++;
        }
        if(numOfOnes>=numOfZeros)
            System.out.println(numOfOnes-numOfZeros);
        else
            System.out.println(numOfZeros-numOfOnes);
    }
    
}
