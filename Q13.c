//WAP to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){
    int year;

    printf("enter your year: ");
    scanf("%d",&year);

    if((year%4==0) || (year%400==0) && (year % 100!=0)){
        printf("year is leap year ");
    }
    else{
        printf("not a leap year ");

    }

    


    return 0;
}