// WAP a program to swap two numbers using a third variable

#include<stdio.h>
int main(){
    int a,b,temp;

    printf("enter a number: ");
    scanf("%d",&a);

    printf("enter another number: ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

     printf("first number is: %d \n",a);
     printf("second number is: %d ",b);

return 0;
}