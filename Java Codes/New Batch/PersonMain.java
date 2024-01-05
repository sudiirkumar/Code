public class PersonMain {
    public static void main(String[] args) {
        Person p1 = new Person("Aman",10);
        Person p2 = new Person("Baman",20);

        System.out.println("Name: "+p1.name+"\nAge: "+p1.age);
        System.out.println("\nName: "+p2.name+"\nAge: "+p2.age);
    }
}
class Person{
    String name;
    int age;

    Person(String name, int age){
        this.name = name;
        this.age = age;
    }
    
}
