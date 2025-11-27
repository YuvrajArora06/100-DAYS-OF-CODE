// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() {
    enum UserRole role;

    // Assign a role (for demonstration, we assign ADMIN; this can be changed)
    role = ADMIN; // Change to USER or GUEST to test other cases

    // Display message based on user role
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have guest access.\n");
            break;
        default:
            printf("Invalid user role!\n");
            break;
    }

    return 0;
}
