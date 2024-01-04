class RectangleMain{
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        
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