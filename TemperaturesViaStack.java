package day7;

import java.util.Stack;

public class TemperaturesViaStack {
    public static int[] find(int[] arr){
        int size=arr.length;
        int[] res=new int[size];
        Stack<Integer> stk=new Stack<>();
        for(int ind=0;ind<size;ind++){
            while(!stk.isEmpty()&&arr[ind]>arr[stk.peek()]){
                int pIn=stk.pop();
                res[pIn]=ind-pIn;
            }
            stk.push(ind);
        }
        return res;
    }
    public static void main(String[] args) {
        int[] 
    }
}
