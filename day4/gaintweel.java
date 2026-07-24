import java.util.Scanner;

public class gaintweel {
    public static void main(String[] args) {
        Scanner you= new Scanner(System.in);
        for(int cabin=92;cabin>=87;cabin--){
            System.out.println("New cabin Arrived");
            for(int person=1;person<=4;){
                System.out.println("Let me know your Age");
                int age=you.nextInt();
                if(age>=18&&age<=60){
                    person++;
                    System.out.println("Enjoy your ride");
                }else System.out.println("Sorry Your safety is your priorty");
            }
        }
        you.close();
    }
}
