package icpcsheet2;

public class ICPCSheet2 {

    public static void main(String[] args) {
        int [] list = {9,8,7,6,5,4,3,2,1};
        BubbleSort is = new BubbleSort();
        is.bubbleSort(list);
        for (int i = 0; i < list.length; i++) 
            System.out.print(list[i] +" ");
    }
    
}
