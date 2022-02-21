package icpcsheet2;

public class InsertionSort {

    private int []list;
    public InsertionSort() {
    }
    public InsertionSort(int []list){
        this.list = list.clone();
    }
    public int[]insertionSort(){
        
        for (int i = 1; i < list.length; i++) {
            int j,current = list[i];
            for (j = i-1; j >=0 && current<list[j]; j--) 
                list[j+1] = list[j];
            list[j+1] = current;
        }
        return list;
    }
}
