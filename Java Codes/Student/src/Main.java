public class Main {
    public static void main(String[] args) {
        School school = new School();
        school.addTeacher("Abhay","Mathematics",10000);
        school.addTeacher("Bharti","Science",12000);
        school.addTeacher("Gopal","Social science",15000);

        school.addStudent("Aditi",1,school.getTeacher(1));
        school.addStudent("Dheeraj",2,school.getTeacher(2));
        school.addStudent("Seema",3,school.getTeacher(0));
        school.addStudent("Aman",4,school.getTeacher(1));
        school.addStudent("Sapna",5,school.getTeacher(0));

        school.printAllTeachers();
        school.printAllStudents();
    }
}
