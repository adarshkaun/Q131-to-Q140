#include <stdio.h>

typedef enum {
    MALE = 1,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name[50];
    Gender gender;
} Person;

int main() {
    Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender (1=MALE, 2=FEMALE, 3=OTHER): ");
    scanf("%d", (int*)&p.gender);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: MALE\n");
            break;
        case FEMALE:
            printf("Gender: FEMALE\n");
            break;
        case OTHER:
            printf("Gender: OTHER\n");
            break;
        default:
            printf("Gender: INVALID\n");
    }

    return 0;
}
