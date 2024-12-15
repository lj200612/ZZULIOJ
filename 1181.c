#include<stdio.h>
struct f
{
    char name[21];
    int year;
    int month;
    int day;
};

int main() {
    int n;
    scanf("%d", &n);

    struct f f[n];

     for(int i = 0; i < n; i++) {
        scanf("%s %d %d %d", f[i].name, &f[i].year,&f[i].month,&f[i].day);
    }

    int minIndex = 0;

    for (int i = 1; i < n; i++) {
    if (f[i].year > f[minIndex].year || 
        (f[i].year == f[minIndex].year && f[i].month > f[minIndex].month) || 
        (f[i].year == f[minIndex].year && f[i].month == f[minIndex].month && f[i].day > f[minIndex].day)) {
        minIndex = i;
    }
}


    printf("%s %04d-%02d-%02d", f[minIndex].name, f[minIndex].year, f[minIndex].month, f[minIndex].day);
    
    return 0;
}