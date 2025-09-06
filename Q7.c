//WAP to swap two numbers without using a third variable

#include<stdio.h>
int main(){
    int a,b;

    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter another number: ");
    scanf("%d",&b);

    printf("before swapping: a = %d, b = %d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("aftr swapping: a = %d, b = %d\n", a, b);


    return 0;
}

  