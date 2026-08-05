package day11;
import java.util.Arrays;
import java.util.Comparator;
public class DemoFactorypattren {
    public static void main(String[] arr){
        Warehouse house=new DemoSingle();//factory pattern upcasting
        house.viewGoods();
        //house.illustrateReference();
        //even though DemoSingle Constructor it has casted to Warehouse
        house =new Modify();
        System.out.println("\nReverse Sorting via comparator");
        Arrays.stream(house.goods).sorted(Comparator.reverseOrder()).forEach(System.out::println);
    }
    
}
