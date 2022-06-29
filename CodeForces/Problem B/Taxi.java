public class Taxi {
    public static void main(String []args){
        java.util.Scanner in =new java.util.Scanner(System.in);
        int n = in.nextInt(),s;
        int []arr = new int[5];
        
        for (int i = 0; i < n; i++){
            arr[in.nextInt()]++;
        } 
        s = arr[3]+arr[4]+arr[2]/2;
        arr[1] -=arr[3];
        if(arr[2]%2 ==1){
            s++;
            arr[1]-=2;
        }
        if(arr[1]>0)
            s+= (arr[1]+3)/4;
        
         System.out.println(s);   
        
       
        
    }
}