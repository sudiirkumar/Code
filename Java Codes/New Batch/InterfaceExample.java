interface Application{
    public abstract void logout();
    void printHello();
}
abstract class App{
    static String name = "Pathshala";
    void login(){
        System.out.println("Login successful");
    }
    abstract void show();
}
class InterfaceExample extends App implements Application{
    @Override
    public void logout(){
        System.out.println("Logged out");
    }
    @Override
    public void printHello(){
        System.out.println("Hello user");
    }
    @Override
    void show(){
        System.out.println("App name: "+name);
    }
    public static void main(String[] args) {
        InterfaceExample i = new InterfaceExample();
        i.login();
        i.printHello();
        i.show();
        i.logout();
    }
}