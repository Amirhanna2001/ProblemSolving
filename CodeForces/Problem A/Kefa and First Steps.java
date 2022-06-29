public class KefaAndFirstSteps {
     public static void main(String[] args) {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(),max=1,loc=1;
        int [] arr = new int[n];
         for (int i = 0; i < n; i++) {
             arr[i] = in.nextInt();
         }
         
         for (int i = 1; i < n; i++) {
             if(arr[i] >= arr[i-1])
                 max = Math.max(++loc, max);
             else
                 loc = 1;
             
         }
         System.out.println(max);
    }
}