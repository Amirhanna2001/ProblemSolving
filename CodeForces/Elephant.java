package codeforces;

public class Elephant {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        int friendSteps = input.nextInt(),div=0;
          
        if(friendSteps<5)
            div = 1;
        else if(friendSteps %5 ==0)
            div = friendSteps/5;
        else if(friendSteps>5 && friendSteps%5!=0){
            div = friendSteps/5 +1;
            }
                
                
        
        System.out.println(div);
        
    }
}
