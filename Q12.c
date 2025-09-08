#include<stdio.h>
int main(){
    int num;

    printf("enter a number: ");
    scanf("%d",&num);

    if(num>0){
        if(num == 0) {
            printf("number is zero\n");
        } else{
            printf("number is positive\n");
        }
    } else{
        printf("number is negative\n");
    }
    return 0;
}