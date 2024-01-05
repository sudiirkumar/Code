class RectangleMain{
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        r.l = 10;
        r.b = 8;
        System.out.println(r.calcArea());
        System.out.println(r.calcPerimeter());
    }
}
class Rectangle{
    int l;
    int b;

    int calcArea(){
        return l*b;
    }
    int calcPerimeter(){
        return 2*(l+b);
    }
}