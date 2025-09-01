// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
    int a,b,sum,diff,prod,div;

    printf("enter a number: ");
    scanf("%d",&a);

    printf("enter a number: ");
    scanf("%d",&b);

    sum=a+b;
    diff=a-b;
    prod=a*b;
    div=a/b;

    printf("sum is: %d\n",sum);
    printf("diff is: %d\n",diff);
    printf("product is: %d\n",prod);
    printf("division is: %d\n",div);
    

    return 0;
}