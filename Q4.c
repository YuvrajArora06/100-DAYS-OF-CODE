//Q4. wap to calculate the area and circumference of a cirlce given it's radius.

#include<stdio.h>
int main(){
    float area,circum,radius;

    printf("enter the radius of your circle: ");
    scanf("%f",&radius);

    area=(3.14)*(radius)*(radius);
    circum=2*(3.14)*(radius);

    printf("area of the circle is: %f",area);
    printf("circumference of the circle is: %f",circum);
    
    return 0;
}
