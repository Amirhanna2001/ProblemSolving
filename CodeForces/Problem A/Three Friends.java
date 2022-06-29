public class ThreeFriends {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int t = in.nextInt(),a,b,c;
        while(t>0){
            a = in.nextInt();b=in.nextInt();c=in.nextInt();
            
            
            System.out.println(Math.max(Math.abs(a-b) + Math.abs(a-c) + Math.abs(b-c) -4,0));
            t--;
        }
    }
}
