#include<stdio.h>
int main(){
    int a, b;
    int r;

    scanf("%d %d", &a, &b);
    while(1){
        r = a % b;
        a = b;
        b = r;
        if(r == 0){
            printf("%d", a);  
            break;         
        }
    }
    return 0;
}