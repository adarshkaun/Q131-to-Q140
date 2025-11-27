#include <stdio.h>

typedef enum {
    ADMIN = 1,
    USER,
    GUEST
} Role;

int main() {
    const char *names[] = {"ADMIN", "USER", "GUEST"};
    Role r;

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", names[r - 1], r);
    }

    return 0;
}
