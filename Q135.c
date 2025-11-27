#include <stdio.h>

typedef enum {
    SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
} Status;

int main() {
    Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        printf("%d\n", s);
    }

    return 0;
}
