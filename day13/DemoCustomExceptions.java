package day13;

import java.util.Scanner;

class DenominationsException extends RuntimeException{
    public DenominationsException(){
    super("Invalid DenominationException");
}
}
public class DemoCustomExceptions {
  public static void main(String[] args) {
    int required = 0;
    try(Scanner scan=new Scanner(System.in)){
        System.out.println("Enter desired amount");
        required=scan.nextInt();
        if(required%500==0) throw new DenominationsException();
        else System.out.println(required/500);
    }catch(DenominationsException dm){
        System.out.println(dm);
        main(args);
    }

  }
    
}
