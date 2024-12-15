#include <stdio.h>
#include <stdbool.h>

#define MAX_STARS 300

// Define structure for star coordinates
struct Star {
    int x;
    int y;
};

int main() {
    int n;
    struct Star stars[MAX_STARS];
    bool counted[MAX_STARS] = {false};  // Array to track if a star has been counted
    int count = 0;

    // Read number of stars
    scanf("%d", &n);

    // Read star coordinates
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &stars[i].x, &stars[i].y);
    }

    // Count unique stars
    for (int i = 0; i < n; ++i) {
        if (!counted[i]) {
            counted[i] = true;
            count++;

            // Check for duplicates
            for (int j = i + 1; j < n; ++j) {
                if (!counted[j] && stars[i].x == stars[j].x && stars[i].y == stars[j].y) {
                    counted[j] = true;
                }
            }
        }
    }

    // Output the number of unique stars
    printf("%d\n", count);

    return 0;
}