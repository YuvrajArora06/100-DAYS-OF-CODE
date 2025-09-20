//wap to input three numbers and find the largest amog them using if-else

#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter a number: ");
    scanf("%d", &a);

    printf("enter another number: ");
    scanf("%d",&b);

    printf("enter the third number: ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("largest number is a ");
    }

    else if(b>a && b>c){
        printf("largest number is b ");
    }

    else{
        printf("largest number is c ");
    }


    return 0;
}