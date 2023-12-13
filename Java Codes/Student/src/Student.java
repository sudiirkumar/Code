public class Student {
    String studentName;
    int rollNumber;
    Teacher classTeacher;
    final private static String schoolName = "ABC public school";

    void printDetails(){
        System.out.println("Student name: "+studentName);
        System.out.println("Student roll: "+rollNumber);
        System.out.println("School name: "+schoolName);
    }
}
