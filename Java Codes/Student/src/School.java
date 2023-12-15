public class School {
    final static String schoolName = "ABC public school";
    static int noOfStudent = 0;
    static int noOfTeacher = 0;
    static Student[] students;
    static Teacher[] teachers;

    School(){
        students = new Student[100];
        teachers = new Teacher[20];
    }
    void addTeacher(String teacherName, String subject, int salary){
        teachers[noOfTeacher++] = new Teacher(teacherName,subject,salary);
    }
    void addStudent(String studentName, int roll, Teacher teacher){
        students[noOfStudent++] = new Student(studentName,roll,teacher);
    }
    void printAllTeachers(){
        for(int i=0;i<noOfTeacher;i++){
            teachers[i].printDetails();
        }
    }
    void printAllStudents(){
        for(int i=0;i<noOfStudent;i++){
            students[i].printDetails();
        }
    }
    Teacher getTeacher(int i){//getter method
        return teachers[i];
    }
}
