
public class InSearchOfAnEasyProblem {
    
    public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(),sum=0;
        
        for (int i = 0; i < n; i++) 
            sum+=in.nextInt();
        
        if(sum>0)
            System.out.println("HARD");
        else
            System.out.println("EASY");
    }
        
}
