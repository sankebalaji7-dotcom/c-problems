public class Typeparsing {
    public static void main(String[] args) {
        String strWt="49.10",strHt="164";
        double weight=Double.parseDouble(strWt);
        int height=Integer.parseInt(strHt);
        double ht=(double)height/100;
        System.out.println(weight+height);
        double bmi=(double)(weight/(ht*ht));
        System.out.println("Your bmi " +bmi);
    }
}
