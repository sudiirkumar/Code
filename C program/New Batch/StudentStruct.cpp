// Store the First name of the student.
// Store the Last name of the student.
// Store the unique Roll number for every student.
// Store the CGPA of every student.
// Store the courses registered by the student.

// Add Student Details
// Find the student by the given roll number
// Find the student by the given first name
// Find the students registered in a course
// Count of Students
// Delete a student
// Update Student
#include<stdio.h>
#include<string.h>
typedef struct Student{
    char name[30];
    int roll;
    int standard;
}Student;
void printDetails(Student st){
    printf("\n\nStudent name: %s",st.name);
    printf("\nStudent roll: %d",st.roll);
    printf("\nStudent class: %d",st.standard);
}
void printAllStudents(Student st[],int n){
    for(int i=0;i<n;i++){
        printDetails(st[i]);
    }
}
void inputDetails(Student *st){
    char temp[30];
    printf("Enter student name: ");
    fflush(stdin);
    gets(temp);
    strcpy((*st).name,temp);
    printf("Enter student roll: ");
    scanf("%d",&(*st).roll);
    printf("Enter student class: ");
    scanf("%d",&(*st).standard);
}
void inputAllStudents(Student st[],int n){
    for(int i=0;i<n;i++){
        inputDetails(&st[i]);
    }
}
int main(){
    Student s[2];
    inputAllStudents(s,2);
    printAllStudents(s,2);
    return 0;
}