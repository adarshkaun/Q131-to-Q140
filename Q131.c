#include <stdio.h>

typedef enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

int main() {
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };
    for (Day d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", names[d], d);
    }
    return 0;
}
