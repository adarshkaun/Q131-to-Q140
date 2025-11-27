#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

int main() {
    Status s = SUCCESS;   // change this value to test

    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Unknown status.\n");
    }

    return 0;
}
