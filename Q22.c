//wap to find profit or loss percentage given cost price and selling price


#include<stdio.h>
int main(){
    float CP,SP,LP,PP;

    printf("enter your cost price: ");
    scanf("%f",&CP);

    printf("enter your selling price: ");
    scanf("%f",&SP);

    if(CP>SP){
        LP=((CP-SP)/CP)*100;
        printf("loss percentage is: %d",LP);
    }

    else if(SP>CP){
        PP=((SP-CP)/SP)*100;
        printf("profit percentage is: %d",PP);
    }

    else{
        printf("neither profit nor loss");
    }

    return 0;
}