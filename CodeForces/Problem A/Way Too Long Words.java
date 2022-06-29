public class WayToLongWords {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        int numOfWords = input.nextInt();
        String [] words = new String[numOfWords];
        for (int i = 0; i < numOfWords; i++) 
            words[i] = input.next();
        
        for (String word : words) {
            if (word.length() <= 10) {
                System.out.println(word);
            } else {
                System.out.print(word.charAt(0));
                System.out.print(word.length() - 2);
                System.out.print(word.charAt(word.length() - 1));
                System.out.println();
            }
        }
        
    }
}
