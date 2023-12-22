public class Manager extends Employee{
    private Employee[] employees;
    private int noOfEmployees;

    public Manager(String employeeName, int salary, String department) {
        super(employeeName, salary);
        this.department = department;
        employees = new Employee[10];
        noOfEmployees = 0;
    }
    public void addEmployee(Employee e){
        e.setDepartment(this.department);
        employees[noOfEmployees++] = e;
    }
    @Override
    public String getDepartment(){
        return department+" Manager";
    }
    public void printDetails(){
        System.out.println(super.getDepartment());
    }
}
