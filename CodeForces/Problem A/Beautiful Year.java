
public class BeautifulYear {
    public static void main(String [] args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        java.util.HashSet<Integer> numbers = new java.util.HashSet<>();
        int year = in.nextInt();
        while (true)
    {
        year += 1;
        int a = year / 1000;
        int b = year / 100 % 10;
        int c = year / 10 % 10;
        int d = year % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
        System.out.println(year);
    }
}


