#include<stdio.h>
#include<string.h>
typedef struct Student{
    char name[30];
    int roll;
    int marks;
    char address[30];
}Student;
void setValues(char name[],int roll,int marks,char add[],Student *st){
    // st->name = name;
    strcpy(st->name,name);
    st->roll = roll;
    st->marks = marks;
    // st->address = add;
    strcpy(st->address,add);
}
void printValues(Student *st){
    printf("\nName: %s",st->name);
    printf("\nRoll: %d",st->roll);
    printf("\nMarks: %d",st->marks);
    printf("\nAddress: %s",st->address);
}
int main(){
    Student st1;
    setValues("Aman",1,100,"Gaya",&st1);
    printValues(&st1);
    Student st2;
    setValues("Rahul",2,95,"Patna",&st2);
    printValues(&st2);
    return 0;
}