//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>  
#include <string.h>
int main() {
    char date[11]; // Format: dd/04/yyyy
    char newDate[12]; // Format: dd-Apr-yyyy

    // Read the date from the user
    printf("Enter the date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Check if the input format is correct
    if (strlen(date) != 11 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format.\n");
        return 1;
    }

    // Construct the new date format
    newDate[0] = date[0];
    newDate[1] = date[1];
    newDate[2] = '-';
    newDate[3] = 'A';
    newDate[4] = 'p';
    newDate[5] = 'r';
    newDate[6] = '-';
    newDate[7] = date[6];
    newDate[8] = date[7];
    newDate[9] = date[8];
    newDate[10] = date[9];
    newDate[11] = '\0';

    // Print the modified date
    printf("Date in dd-Apr-yyyy format: %s\n", newDate);

    return 0;
}