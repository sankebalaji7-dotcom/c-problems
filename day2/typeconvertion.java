public class typeconvertion {
    public static void main(String[] args) {
        String contactname="Bahubali";
        System.out.println(contactname.toLowerCase());
        Object obj1=contactname;//Upcasting
       System.out.println(obj1);
       obj1=12.5;
       System.out.println(obj1);
       Object obj2=false;
       Boolean data=(Boolean) obj2;
       System.out.println(data);
       long zeta=88l; char alpha='\0';
       alpha = (char) zeta;
       System.out.println(alpha);
       short micro=92;int fella=0;
       fella=micro;
       float seek=0.0f;seek=micro;
       byte sigma=0;sigma=(byte)micro;
       System.out.println(sigma);
       char check='R', match='a';
       check =(char)(check^match);
       check =(char)(check^match);
       check =(char)(check^match);
       System.out.println(check+" "+match);
        }
}
