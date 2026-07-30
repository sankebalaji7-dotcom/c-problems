package day7;

import java.util.Arrays;

public class minvalmaxval {
    public static int[] find(int[][] arr){
        int[] result=   {
            Integer.MAX_VALUE,
            Integer.MIN_VALUE
        };
        for(int[] row:arr){
        result[0]=Math.min(result[0],Arrays.stream(row).min().getAsInt());
        result[1]=Math.max(result[1],Arrays.stream(row).max().getAsInt());
     }
     return result;
    }
    public static void main(String[] args) {
        
        int [][] tbt={
            {12,2,3},
            {28,3},
            {89,23,90}
    
    
    
        };
       int[] received=find(tbt);
       System.out.println(Arrays.toString(received));
    }
}    