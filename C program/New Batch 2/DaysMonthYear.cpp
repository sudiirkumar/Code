#include<stdio.h>
int main(){
    int days;
    printf("Enter number of days: ");
    scanf("%d",&days);
    int year = days/365;
    days = days%365;//135
    int month = days/30;
    days = days%30;//15
    int week = days/7;
    days = days%7;//1
    printf("Year: %d\nMonth: %d\nWeek: %d\nDays: %d",year,month,week,days);
    return 0;
}