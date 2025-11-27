#include <stdio.h>

typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} Menu;

int main() {
    int choice;
    float a, b;

    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch ((Menu)choice) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
