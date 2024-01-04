public class Student {
    private String name;
    private int roll;
    private int marks;

    public Student(String name, int roll, int marks) {
        this.name = name;
        this.roll = roll;
        this.marks = marks;
    }

    public Student() {
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getRoll() {
        return roll;
    }

    public void setRoll(int roll) {
        this.roll = roll;
    }

    public int getMarks() {
        return marks;
    }

    public void setMarks(int marks) {
        this.marks = marks;
    }
    int calcPercentage(){
        return marks*100/500;
    }

    @Override
    public String toString() {
        return "Student name: " + name +
                "\nStudent roll: " + roll +
                "\nStudent marks: "+marks;
    }
}
