package icpcsheet2;

public class BubbleSort {
    public void bubbleSort(int []list){
        boolean needNextPath = true;
        for (int i = 1; i < list.length  && needNextPath ; i++) {
            needNextPath = false;
            for (int j = 0; j< list.length-i; j++) {
                if(list[j]>list[j+1]){
                    int tmp   = list[j];
                    list[j]   = list[j+1];
                    list[j+1] = tmp;
                    needNextPath = true; 
                          
                }
                
            }
        }
 
    }
}
