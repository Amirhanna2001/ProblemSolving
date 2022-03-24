package codeforces;

public class AntonAndDanik {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int anton=0,friend = 0,numOfGames = in.nextInt();
        String s = in.next();
        for (int i = 0; i < numOfGames; i++) {
            if(s.charAt(i) == 'A')
                anton++;
            else
                friend++;
        }
        if(anton>friend)
            System.out.println("Anton");
        
        else if(friend>anton)
            System.out.println("Danik");
        
        else
            System.out.println("Friendship");
            
        
    }
    
}
