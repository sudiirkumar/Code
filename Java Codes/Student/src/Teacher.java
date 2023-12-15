public class Teacher {
    String teacherName;
    String subject;
    private final int salary;
    private final int pf_amount;

    Teacher(String teacherName, String subject,int salary){
        this.teacherName = teacherName;
        this.subject = subject;
        this.salary = salary;
        pf_amount = (int)(0.20*salary);
    }
    void printDetails(){
        System.out.println("Teacher name: "+teacherName);
        System.out.println("Subject: "+subject);
        System.out.println("Salary: "+salary);
        System.out.println("PF amount: "+pf_amount);
        System.out.println();
    }
}
