package icpcsheet4;


public class YetAnotherBookshelf {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int t = in.nextInt(),s,p1 ,p2 ,c;
        while(t>0){
            p1 = p2 = c=0;
            s = in.nextInt();
            int []arr = new int[s];
            for (int i = 0; i < arr.length; i++) 
                arr[i] = in.nextInt();
             
            for (int i = 0; i < arr.length; i++) 
                if(arr[i] == 1){
                    p1 = i;
                    break;
                }
            
            for (int i = s-1; i >-1; i--) 
                if(arr[i] == 1){
                    p2 = i;
                    break;
                }
            
            for (int i = p1; i <= p2; i++) 
                if(arr[i] == 0)
                    c++;
            
            System.out.println(c);
            
                
            
            
            t--;
        }
        
    }
}
