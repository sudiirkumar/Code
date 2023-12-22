public class Main {
    public static void main(String[] args) {
        Employee e = new Employee("Aman",10000);
        System.out.println(e);
        Manager m = new Manager("Raman",20000,"Marketing");
        m.printDetails();
    }
}
