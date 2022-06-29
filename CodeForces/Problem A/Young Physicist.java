
public class YoungPhysicist {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        int n = input.nextInt();
        int []sum = new int[3];
        for (int i = 0; i < n; i++){
            sum[0]+=input.nextInt();
            sum[1]+=input.nextInt();
            sum[2]+=input.nextInt();
        } 
            
        
        if(sum[0] == 0 && sum[1]==0 && sum[2] == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
