#include<stdio.h>
void psort(int *pa,int *pb,int *pc,int *pd) {
    int arr[4] = {*pa, *pb, *pc, *pd};

    for(int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
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

    printf("%d %d %d %d", a, b, c, d);
    return 0;
}