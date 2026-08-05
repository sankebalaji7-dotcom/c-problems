package day11;
import java.util.Arrays;
class Modify extends Warehouse{
    public void alter(){
        Arrays.stream(goods).map(String::toUpperCase).forEach(System.out::println);
    }
}
public class Demohrarcy {
    public static void main(String[] arr){
        Modify mod=new Modify(); mod.alter();
        DemoSingle demo=new DemoSingle();demo.viewGoods();
    }
    
}
