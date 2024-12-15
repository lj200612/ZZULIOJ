#include<stdio.h>

struct Student
    {
        char id[13];
        char name[21];
        int garde[3];
        int total;
    };


int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    int maxTotal = -1;
    int maxIndex = 0;


    for(int i = 0; i < n; i++) {
        scanf("%s", &students[i].id);
        scanf("%s", &students[i].name);
        scanf("%d %d %d", &students[i].garde[0],&students[i].garde[1],&students[i].garde[2]);

        students[i].total = students[i].garde[0] + students[i].garde[1] + students[i].garde[2];

        if (students[i].total > maxTotal) {
            maxTotal = students[i].total;
            maxIndex = i;
        }
    }


    printf("%s %s %d %d %d\n", students[maxIndex].id, students[maxIndex].name, students[maxIndex].garde[0],students[maxIndex].garde[1],students[maxIndex].garde[2]);

    return 0;
    
}