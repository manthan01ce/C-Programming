#include <stdio.h>

int main() {
    int minute = 1;
    float distance_covered = 0.0;

    while (1) {
        distance_covered = minute * 0.5;
        printf("Minute %d: Distance covered = %.1f km\n", minute, distance_covered);

        if (distance_covered >= 10.0) {
            printf("Marathon complete!\n");
            break;
        }
        minute++;
        sleep(1);
    }

    return 0;
}
