package day11;
import java.util.Arrays;
abstract class Transaction{
    int[] statement = {12500,2500,1750,8500,30,9500,3200,5600};
    //non abstract methode
    public void viewStatement(){System.out.println(Arrays.toString(statement));}
    //abstract method
    public abstract void fraudDetection();
}
public class AbstractViaClass extends Transaction {
    public void fraudDetection(){
        Arrays.stream(statement).filter(each->each%500!=0).forEach(System.out::println);

    }
    public static void main(String[]arr){
        //can't create object for abstract class
       AbstractViaClass tran = new AbstractViaClass();
       tran.viewStatement();
       tran.fraudDetection();
    }
}