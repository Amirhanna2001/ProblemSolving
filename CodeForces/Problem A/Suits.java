
public class Suits {
    
    public static void main(String []args){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int sum = 0 ,min,min2;
        int []arr = new int[6];
        for (int i = 0; i < 6; i++) 
            arr[i] = in.nextInt();
        
        if(arr[4] >= arr[5]){//first type
            if(arr[0] >0 || arr[3] >0){
               min = Math.min(arr[0],arr[3]);
               sum+= min*arr[4];
               arr[0] -=min;
               arr[3] -=min;
               
               min2 = Math.min(arr[1], (Math.min(arr[2],arr[3])));
               sum+=min2*arr[5];

            }
                
        }
        else{
            if(arr[3]>0){
                min2 = Math.min(arr[1], (Math.min(arr[2],arr[3])));
                sum += min2*arr[5];
                arr[1]-=min2;
                arr[2]-=min2;
                arr[3]-=min2;
                
                min = Math.min(arr[0],arr[3]);
                sum += min*arr[4];

                    
            }
            
        }
        System.out.println(sum);
            
    }
}
s