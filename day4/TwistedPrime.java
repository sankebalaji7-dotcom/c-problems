package day4;

import java.util.Scanner;

public class TwistedPrime {
    public static void main(String[] args) {
        Scanner ser=new Scanner(System.in);
        int number=0;
        System.out.println("Enter the number");
        number=ser.nextInt();
        if(number==2||number==3||number==5||number==7||
            number%2!=0&&number%3!=0&&number%5!=0&&number%7!=0)
          System.out.println(number+"Prime");
      else System.out.println("NOt a prime");
    
    ser.close();
    }
}
