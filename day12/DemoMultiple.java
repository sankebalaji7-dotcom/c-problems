package day12;

public class DemoMultiple extends DemoFace implements Ride{
    public double eta(double distance){return distance/avgSpeed*60/60;}
    public String carType(double distance)
    {return (distance>15)?"Dezir":"Wagon R";}
    public static void main(String[] args) {
        DemoMultiple demo = new DemoMultiple();
        demo.fareCalculate(45);
        System.out.println(demo.carType(32));
        System.out.println(demo.eta(92));
    }
}