public class Student {
    String studentName;
    int rollNumber;
    Teacher classTeacher;

    Student(String name, int roll,Teacher classTeacher){
        studentName = name;
        rollNumber = roll;
        this.classTeacher = classTeacher;
    }
    void printDetails(){
        System.out.println("Student name: "+studentName);
        System.out.println("Student roll: "+rollNumber);
        System.out.println("School name: "+School.schoolName);
        System.out.println("Teacher name: "+classTeacher.teacherName);
        System.out.println("Teacher subject: "+classTeacher.subject);
        System.out.println();
    }
}
