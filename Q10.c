// WAP to input time in seconds and convert it to hours : minutes : seconds format
#include<stdio.h>
int main(){
int time_in_seconds,hours,minutes,seconds;

printf("enter your time in seconds: ");
scanf("%d",&time_in_seconds);

hours = time_in_seconds/3600;

minutes = (time_in_seconds%3600)/60;

seconds = time_in_seconds;

printf("time = %2d:%2d:%2d \n", hours, minutes, seconds);

    return 0;
}