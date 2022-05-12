public class anonymousObject{
    int a;
    anonymousObject(int p){
        a=p;
    }
    void area(){
        int area = a*a;
        System.out.println("Area of square : "+area);
    }
    void perimeter(int b){
        int peri = 4*b;
        System.out.println("Perimeter of sqaure : "+peri);
    }
    public static void main(String[] args) {
        new anonymousObject(50).area();
        new anonymousObject(10).perimeter(100);
        new anonymousObject(20).area();
        new anonymousObject(50).perimeter(21);
    }
}