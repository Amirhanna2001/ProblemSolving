
public class Tram {
    
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        int n = input.nextInt();
        int max = 0,currentPassengers = 0,exit,enter;
        for (int i = 0; i < n; i++) {
            exit               = input.nextInt();
            enter              = input.nextInt();
            currentPassengers  =currentPassengers -exit + enter;
            if(max<currentPassengers)
                max = currentPassengers;
        }
        System.out.println(max);
    }
}
