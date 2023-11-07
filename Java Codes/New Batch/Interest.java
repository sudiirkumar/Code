public class Interest {
    public static void main(String[] args){
        int p=1000;
        int r=10;
        int t=2 ;
        double si = (p*r*t)/100.0;
        double amount = p*Math.pow(1+(r/100.0),t);
        double ci = amount-p;
        System.out.println(si);
        System.out.println(amount);
        System.out.println(ci);
    }
}
//ci = 210
//si = 200