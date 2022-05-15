#include<stdio.h>
struct Employee
{
    int emp_num;
    char name[100];
    char department[100];
    int basic_salary;
};
int main(){
    struct Employee emp[10];//creating an array of structure Employee
    int i;
    //Input details
    for(i=0;i<10;i++){
        fflush(stdin);
        printf("\n\nEmployee %d : \n",i+1);
        printf("\nEnter employee number : ");
        scanf("%d",&emp[i].emp_num);
        printf("Enter name of employee : ");
        scanf("%s",&emp[i].name);
        printf("Enter department of employee : ");
        scanf("%s",&emp[i].department);
        printf("Enter basic salary : ");
        scanf("%d",&emp[i].basic_salary);
    }
    system("cls");
    //output details
    printf("\n\n\n-----------------------Employee details----------------------\n\n");
    printf("\nEmp No   Name               Department         Basic Salary\n");
    printf("-------------------------------------------------------------\n");
    for(i=0;i<10;i++){
        printf("\n%-9d%-19s%-19s%12d",emp[i].emp_num,emp[i].name,emp[i].department,emp[i].basic_salary);
    }
    return 0;
}