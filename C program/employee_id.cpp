#include<stdio.h>
int main(){
    int id;
    int bsal;
    printf("Enter id of employee : ");
    scanf("%d",&id);
    printf("Enter basic salary : ");
    scanf("%d",&bsal);//5000
    int tax;
    printf("Enter tax %% : ");
    scanf("%d",&tax);//tax = 10%
    tax = bsal * tax / 100;//500
    printf("Employee id : %d\tSalary : %d",id,bsal-tax);
    return 0;
}