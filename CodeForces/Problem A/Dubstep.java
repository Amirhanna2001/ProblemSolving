public class Dubstep {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String s = input.next();
        s = s.replaceAll("WUB", " ").trim();
        
        System.out.println(s);
    }
}