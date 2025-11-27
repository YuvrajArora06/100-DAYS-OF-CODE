// Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender
{
    MALE
    , FEMALE
    , OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person person1;

    // Assign values to person1
    snprintf(person1.name, sizeof(person1.name), "Alice");
    person1.gender = FEMALE;

    // Print person's gender
    printf("Name: %s\n", person1.name);
    printf("Gender: ");
    switch (person1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
