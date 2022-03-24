
package icpcsheet4;

import java.util.Scanner;

public class HitTheLottery {
     public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(),sum=0;
        //1, 5, 10, 20, 100
        while(n>0){
            if(n>=100){
                n-=100;
                sum++;
            }
            else if(n<100 && n>=20){
                n-=20;
                sum++;
            }
            else if(n<20 && n>=10){
                n-=10;
                sum++;
            }
            else if(n<10 && n>=5){
                n-=5;
                sum++;
            }
            else {
                n-=1;
                sum++;
            }
        }
         System.out.println(sum);
     }
}
