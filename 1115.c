#include<stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int num[n];


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int min = num[0];
    int index = 0;

    
    for (int i = 1; i < n; i++)
    {
        if (num[i] < min){
            min = num[i];
            index = i;
        }
        
    }


    printf("%d %d", min, index);


    return 0;    
}