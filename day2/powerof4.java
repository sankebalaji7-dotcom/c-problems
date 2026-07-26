import java.util.Scanner;

public class powerof4 {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);

        int n=0;
          n=scan.nextInt();
      if(n>0&&(n&(n-1))==0&&(n-1)%3==0)
            System.out.println("true");
        else
            System.out.println("false");
    }
}
