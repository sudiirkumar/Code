public class Teacher {
    String teacherName;
    String subject;
    private int salary;
    private int pf_amount;

    Teacher(String teacherName, String subject){
        this.teacherName = teacherName;
        this.subject = subject;
        salary = 10000;
        pf_amount = 2000;
    }
    void printDetails(){
        System.out.println("Teacher name: "+teacherName);
        System.out.println("Subject: "+subject);
    }
}
