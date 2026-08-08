package day14;

import java.util.Arrays;

public class HandsOnString {
    public static void main(String[]ar){
        String alpha = "Razak Mohamaed";
        String beta = new String();
        System.out.println(beta.length());
        beta= beta.trim();
        System.out.println(beta.length());
        System.out.println(beta.equals("Razak Mohamed"));
        System.out.println(alpha=="Razak Mohamed");
        alpha = alpha.replace("Razak","Requeeb");
        System.out.println(alpha.compareTo("Raqueeb Mohamed"));
        byte[] bytes = alpha.getBytes();
        System.out.println(Arrays.toString(bytes));
        char[] chars = alpha.toCharArray();
        System.out.println(Arrays.toString(chars));
        byte[] newBytes = {65,66,67,68,69,70};
        String zeta = new String(newBytes);
        System.out.println(zeta);
        char[] newChars = {122,121,120,119,118};
        String delta = new String(newChars);
        System.out.println(delta);
        System.out.println(delta.contains("Y"));
    }
}