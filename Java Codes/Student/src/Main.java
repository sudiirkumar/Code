public class Main {
    public static void main(String[] args) {
        Teacher teacher1  = new Teacher("Abhay","Social science");
        Student s1 = new Student("Aman",1, teacher1);
        s1.printDetails();
    }
}
