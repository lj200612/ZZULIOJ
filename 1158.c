#include <stdio.h>


void psort(int *pa, int *pb, int *pc, int *pd) {
    int arr[4] = {*pa, *pb, *pc, *pd};  
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    
    *pa = arr[0];
    *pb = arr[1];
    *pc = arr[2];
    *pd = arr[3];
}

int main() {
    int a, b, c, d;
    
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    
    psort(&a, &b, &c, &d);
    
    
    printf("%d %d %d %d\n", a, b, c, d);
    
    return 0;
}
