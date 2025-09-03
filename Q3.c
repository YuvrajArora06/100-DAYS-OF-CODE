//Q3. WAP to calculate the area and perimeter of a rectangle given it's length and breadth.

#include<stdio.h>
int main(){
    int area,perimeter,length,breadth;

    printf("enter the length of the rectangle: ");
    scanf("%d",&length);

    printf("enter the breadth of the rectangle: ");
    scanf("%d",&breadth);

    perimeter=2*(length+breadth);
    area=length*breadth;

    printf("perimeter of the rectangle is: %d",perimeter);
    printf("area of the rectangle is: %d",area);


    return 0;
}