//WAP to calculate simple interest and compound interest for given principal,time and rate 

#include<stdio.h>
#include<math.h>
int main(){
    float P,R,T,SI,CI,amount ;

    printf("enter your principal: ");
    scanf("%f",&P);

    printf("enter your rate: ");
    scanf("%f",&R);

    printf("enter your time in years: ");
    scanf("%f",&T);

    SI = (P*R*T)/100;

    amount = P * pow((1 + R/100),T);
    CI = amount - P;

    printf("your Simple interest is: %f\n",SI);
    printf("your compound interest is: %2f\n",CI);

    return 0;
}