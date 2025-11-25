//Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Numbers {
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN,
    FIFTEEN
};
int main() {
    enum Numbers num;

    // Print the values of the enum members
    for (num = TEN; num <= FIFTEEN; num++) {
        printf("%d\n", num);
    }

    return 0;
}