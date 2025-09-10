//WAP to input a character and check whether it is a vowel or consonant using if-else

#include<stdio.h>
int main(){
    char c;

    printf("enter your character: ");
    scanf("%s",&c);

    if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')){
        printf("your charcter is vowel ");
    }
    else{
        printf("your character is consonant ");
    }

    return 0;
}