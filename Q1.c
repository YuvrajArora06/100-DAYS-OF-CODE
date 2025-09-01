//Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>
int main(){
    int num1,num2,sum;

    printf("enter the first number: ");
    scanf("%d",&num1);

    printf("enter the second number: ");
    scanf("%d",&num2);

    sum=num1+num2;

    printf("sum of the two numbers entered is %d",sum);

    return 0;
}