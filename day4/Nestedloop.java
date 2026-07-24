package day4;

import java.util.Scanner;

public class Nestedloop {
    public static void main(String[] args) {
         Scanner ser=new Scanner(System.in);
        int number=0, reversed=0;
        System.out.println("Enter the number");
        number=ser.nextInt();
        
      while (number>0) {
        reversed=reversed*1+(number%10);
        number/=10;
      }
      for(int times=1;times<=2;times++){
        for(int div=2;div<=Math.sqrt(number);div++){
            if(number%div==0){
                System.out.println("Not prime");
                return;
            }
        }
        number=reversed;
      }
      System.out.println("Twisted prime");
    ser.close();
    }
}
