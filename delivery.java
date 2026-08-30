//package Day2;

import java.util.Scanner;

public class delivery {
    public static void main(String[] args) {
        String name="",address="",mobile="";
        boolean isValid=true;
        Scanner scan=  new Scanner(System.in);
        if(!name.matches("[A-Za-z ]{5,}$"))
        {isValid=false;System.out.println("Invalid name");}
        if(!mobile.matches("^[0-9]{10}$"))
        {isValid=false;System.out.println("Invalid mobile number");}
        if(!address.matches("^[A-Za-z ]{5,}$"))
        {isValid=false;System.out.println("Invalid address number");}
        System.out.println("Enter your order Cost: ");
        double cost = scan.nextDouble();
        double deliveryCharge=0;
        double totalAmount;

        if(cost>500){
            deliveryCharge = 0;
            System.out.println("Free Delivery");
        }else if(cost > 200){
            deliveryCharge = cost*0.05;
        }else{
            deliveryCharge=50;
        }
        totalAmount = cost + deliveryCharge;

        System.out.println("\n-------Order Details------");
                System.out.println("Name :" +name);
                System.out.println("address:"+ address);
                System.out.println("Mobile Number:"+ mobile);
                System.out.println("Order Cost:"+ cost); 
                 System.out.println("Delivery charge:"+ deliveryCharge);
                 System.out.println("Total Amount:"+ totalAmount);
                 scan.close();
     } 
}