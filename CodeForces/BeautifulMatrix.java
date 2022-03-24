package secondsession;
public class BeautifulMatrix {
    
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int counterOfI=0 ,counterOfJ=0;
        int [] []matrix = new int[5][5];
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                matrix[i][j]=in.nextInt(); 
                if(matrix[i][j] == 1){
                    counterOfI = i;
                    counterOfJ = j;
                    break;
                }
                    
                
            }
                    
        }
        System.out.println(Math.abs((counterOfI-2))+Math.abs(counterOfJ-2));
        
        
        
    
    }



    
}
