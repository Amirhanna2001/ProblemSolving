
public class NextScore {
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt(),k=in.nextInt(),counter=0,current = 0;
        int[] temp = new int [n];
        for (int i = 0; i < n; i++) {
            temp[i] = in.nextInt();
            if(i == k-1)
                current = temp[i];
            
        }
            for (int i = 0; i < n; i++) {
            if(temp[i] >= current && temp[i] >0)
                counter++;
        }
        
        
        
        System.out.println(counter);
    }
}
