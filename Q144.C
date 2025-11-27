// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Point {
    int x;
    int y;
};
void printPoint(struct Point p) {
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}
int main() {
    struct Point point1;

    // Read point coordinates
    printf("Enter x coordinate: ");
    scanf("%d", &point1.x);
    printf("Enter y coordinate: ");
    scanf("%d", &point1.y);

    // Print point using the function
    printPoint(point1);

    return 0;
}
