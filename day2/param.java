package day2;

import java.util.Scanner;

public class param {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
       double weight=0, height=0, bgmi=0;
       String status="";
       System.out.println("welcom to know your health status");
       System.out.println("let our know your weight(kg)");
       weight=scan.nextDouble();
       System.out.println("let our your height(cm)");
       height=scan.nextDouble();
       height/=100;
       bgmi=weight/height*height;
        status=(bgmi<=18.0)?"Underweight":
        (bgmi>=18.0&&bgmi<=24.0)?"Normal":
        (bgmi>=24.0&&bgmi<=28.0)?"Overweight":"Obese";
       System.out.println(status+"is your health update");


    }
}
