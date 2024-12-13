#include<stdio.h>

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }

    int min = a[0];
    for(int i = 1 ; i < 10;i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    int max = a[0];
    for(int i = 1 ; i < 10;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    int avg, sum=0;
    for(int i = 0 ; i < 10;i++){
         sum = sum + a[i];
         avg = sum / 10;
    }
    printf ("%d %d %d",max, min, avg);

    return 0;
}