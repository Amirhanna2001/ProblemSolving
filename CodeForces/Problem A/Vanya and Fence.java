public class VanyaAndFence {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n , h,c=0,person;
        n = in.nextInt();
        h = in.nextInt();
        for (int i = 0; i < n; i++) {
            person = in.nextInt();
            if(person>h)
                c+=2;
            else
                c++;
        }
        System.out.println(c);
    }
    
}
