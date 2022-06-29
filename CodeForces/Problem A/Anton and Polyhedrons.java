
import java.util.Scanner;

public class AntonAndPolyhedrons {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n= in.nextInt(),sum=0;
        String s;
        for (int i = 0; i < n; i++) {
            s=in.next();
            if(s.equals("Tetrahedron"))
                sum+=4;
            else if(s.equals("Cube"))
                sum+=6;
            else if(s.equals("Octahedron"))
                sum+=8;
            else if(s.equals("Dodecahedron"))
                sum+=12;
            else if(s.equals("Icosahedron"))
                sum+=20;
        }
        System.out.println(sum);
    }
}