import java.util.Scanner;

public class demoswitch {
    public static void main(String[] args) {
       
        double cost=0,emi=0; int tenure=0;
        Scanner scan= new Scanner(System.in);
        System.out.println("The amount for EMI eligibility");
        cost=scan.nextDouble();
        if(cost>=5000){
        System.out.println("eligibility to convert emi"+cost+"into emi");
        System.out.println("Enter desired tenure");
        tenure=scan.nextInt();
        switch(tenure){
            case 12: case 3: case 6: case 9:
                emi=(cost+(cost*0.05))/tenure;
                System.out.println("your ROI is 5%");
                break;
                case 24:
                     emi=(cost+(cost*0.10))/tenure;
                System.out.println("your ROI is 10%");
                break;
                case 36:
                     emi=(cost+(cost*0.15))/tenure;
                System.out.println("your ROI is 15%");
                 break;            
                 default:
                    System.out.println("Invelid tenure");
                    break;
            }
            System.out.println("your repayment EMI is"+emi);
        }
            else{
                System.out.println(cost+"is not eligible for EMI");
            }
    }
}
