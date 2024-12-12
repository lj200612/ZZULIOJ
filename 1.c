#include<stdio.h>

int main() {
    int a;
    int sum = 0;
    while (1) {
        scanf("%d", &a);
        if (a > 0 && a % 2 != 0){
            sum = sum + a;
        }
        else if(a <= 0){
            printf("%d\n", sum);
            break;
        }
        
    }

    return 0;
}