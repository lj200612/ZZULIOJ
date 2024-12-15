#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_NAME 21
#define MAX_FRIENDS 10
 
struct Friend {
    char name[MAX_NAME];
    int year, month, day;
};
 
// Custom comparison function for qsort
int compare(const void *a, const void *b) {
    struct Friend *fa = (struct Friend *)a;
    struct Friend *fb = (struct Friend *)b;
 
    if (fa->month != fb->month) return fa->month - fb->month;
    return fa->day - fb->day;
}
 
int main() {
    int n;
    struct Friend friends[MAX_FRIENDS];
 
    // Input number of friends
    scanf("%d", &n);
 
    // Input friend information
    for (int i = 0; i < n; ++i) {
        scanf("%s %d %d %d", friends[i].name, &friends[i].year, &friends[i].month, &friends[i].day);
    }
 
    // Sort friends by birthday (month and day)
    qsort(friends, n, sizeof(struct Friend), compare);
 
    // Output sorted friend information
    for (int i = 0; i < n; ++i) {
        printf("%s %04d-%02d-%02d\n", friends[i].name, friends[i].year, friends[i].month, friends[i].day);
    }
 
    return 0;
}