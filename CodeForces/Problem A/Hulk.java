
public class Hulk {
    public static void main(String []args){
        java.util.Scanner in =new java.util.Scanner(System.in);
        int n = in.nextInt();
        switch (n) {
            case 1:
                System.out.println("I hate it");
                break;
            case 2:
                System.out.println("I hate that I love it");
                break;
            default:
                for (int i = 0; i < n; i++) {
                    if(i%2==0){
                        if(i == n-1)
                          System.out.print("I hate it");
                        else
                            System.out.print("I hate that ");
                    }
                    else{
                        if(i == n-1)
                          System.out.print("I love it");
                        else
                            System.out.print("I love that ");
                    }
                    
                }   break;
        }
        
    }
}
