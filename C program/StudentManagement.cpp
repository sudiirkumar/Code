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
#include<stdlib.h>
#include<string.h>
#include<conio.h>
typedef struct Student{
    char fname[30];
    char lname[30];
    unsigned short int roll;
    int cgpa;   
    char course[20]; 
}Student;
void addStudent(Student *st){
    printf("\nEnter first name: ");
    fflush(stdin);
    gets(st->fname);
    printf("\nEnter last name: ");
    fflush(stdin);
    gets(st->lname);
    printf("\nEnter roll number: ");
    fflush(stdin);
    scanf("%d",&st->roll);
    printf("\nEnter CGPA: ");
    fflush(stdin);
    scanf("%d",&st->cgpa);
    printf("\nEnter Course: ");
    fflush(stdin);
    gets(st->course);
}
int searchRoll(Student *st,int n,int r){
    for(int i=0;i<n;i++){
        if((st+i)->roll==r){
            return i;
        }
    }
    return -1;
}
int searchName(Student *st,int n,char name[]){
    for(int i=0;i<n;i++){
        if(strcmpi((st+i)->fname,name)==0){
            return i;
        }
    }
    return -1;
}
void showDetails(Student st){
    printf("\n\nName: %s %s",st.fname,st.lname);
    printf("\nRoll: %d",st.roll);
    printf("\nCGPA: %d",st.cgpa);
    printf("\nCourse: %s",st.course);
}
void searchCourse(Student *st,int n,char course[]){
    int isFound = 0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(strcmpi((st+i)->course,course)==0){
            showDetails(*(st+i));
            isFound = 1;
            cnt++;
        }
    }
    if(isFound==0){
        printf("\nNo students found.");
    }
    else{
        printf("\nNumber of students: %d",cnt);
    }
}
void del(Student *st){
    st->fname[0] = '\0';
    st->lname[0] = '\0';
    st->roll = -1;
    st->cgpa = -1;
    st->course[0] = '\0';
}
int main(){
    int ch;
    int noOfStudents = 0;
    Student st[30];
    int x;
    char s[30];
    do{
        system("cls");
        printf("\n1.Add a student\n2.Find the student by the given roll number\n3.Find the student by the given first name\n4.Find the students registered in a course\n");
        printf("5.Count of Students\n6.Delete a student\n7.Update Student\n0.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: addStudent(&st[noOfStudents]);
                    noOfStudents++;
                    //showDetails(st[noOfStudents-1]);
                    break;
            case 2: printf("\nEnter roll to search: ");
                    fflush(stdin);
                    scanf("%d",&x);
                    x = searchRoll(st,noOfStudents,x);
                    if(x==-1){
                        printf("\nStudent not found");
                    }
                    else{
                        showDetails(st[x]);
                    }
                    break;
            case 3: printf("\nEnter first name of student: ");
                    fflush(stdin);
                    gets(s);
                    x = searchName(st,noOfStudents,s);
                    if(x==-1){
                        printf("\nStudent not found");
                    }
                    else{
                        showDetails(st[x]);
                    }
                    break;
            case 4: printf("\nEnter course to search: ");
                    fflush(stdin);
                    gets(s);
                    searchCourse(st,noOfStudents,s);
                    break;
            case 5: printf("\nTotal number of students: %d",noOfStudents);
                    break;
            case 7: printf("\nEnter roll to update: ");
                    fflush(stdin);
                    scanf("%d",&x);
                    x = searchRoll(st,noOfStudents,x);
                    if(x==-1){
                        printf("\nStudent not found");
                    }
                    else{
                        showDetails(st[x]);
                    }
                    printf("\nEnter new details\n");
                    addStudent(&st[x]);
                    printf("\nNew details are: \n");
                    showDetails(st[x]);
                    break;
            case 6: printf("\nEnter roll to delete: ");
                    fflush(stdin);
                    scanf("%d",&x);
                    x = searchRoll(st,noOfStudents,x);
                    if(x==-1){
                        printf("\nStudent not found");
                    }
                    else{
                        showDetails(st[x]);
                    }
                    printf("\nAre you sure?(Y/N):");
                    fflush(stdin);
                    gets(s);
                    if(strcmpi(s,"y")==0){
                        del(&st[x]);
                        printf("\nStudent record deleted successfully\n");
                        noOfStudents--;
                    }
                    break;
            case 0: exit(0);
        }
        getch();
    }
    while(1);
    return 0;
}