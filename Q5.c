// WAP to convert temperature from celsius to fahrenheit
#include<stdio.h>
int main(){
    float temp_in_celsius,temp_in_fahrenheit;

    printf("enter your temperature in celsius: ");
    scanf("%f",&temp_in_celsius);

    temp_in_fahrenheit = 1.8*(temp_in_celsius) + 32;

    printf("your temperature in fahrenheit is: %f", temp_in_fahrenheit);


    return 0;
}