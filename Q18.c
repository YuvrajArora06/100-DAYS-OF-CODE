//wap that accepts a percentage(0 to 100) and assigns a grade based on the following criteria 
//90-100: grade A
//80 to 89: grade B
//70 to 79: grade C
//60 to 69: grade D
//below 60: grade F

#include<stdio.h>
int main(){
    int marks;

    printf("enter your marks: ");
    scanf("%d",&marks);

    if(marks >=90 && marks <= 100){
        printf("Grade A ");
    }
    else if(marks >=80 && marks <= 89){
        printf("Grade B ");
    }
    else if(marks >=70 && marks <=79){
        printf("Grade C ");
    }
    else if(marks >= 60 && marks <= 69){
        printf("Grade D ");
    }
    else if(marks<60){
        printf("Grade F ");
    }


    return 0;
}
