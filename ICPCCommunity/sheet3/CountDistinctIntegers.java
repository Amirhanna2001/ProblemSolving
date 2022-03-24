package icpcsheet3;

public class CountDistinctIntegers {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        java.util.HashSet<Integer> set = new java.util.HashSet<>();
        
        int numOfNumbers = in.nextInt(),n;
        for (int i = 0; i < numOfNumbers; i++) {
            n = in.nextInt();
            set.add(n);
        }
        System.out.println(set.size());
    }
}
