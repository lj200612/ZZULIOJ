#include<stdio.h>
#include<limits.h>
void LargestTwo(int a[], int n, int *pfirst, int *psecond){
    *psecond = INT_MIN;
    *pfirst = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *pfirst) {
            *psecond = *pfirst;
            *pfirst = a[i];
        } else if(a[i] > *psecond){
            *psecond = a[i];
        }
    }

}


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max, max_2;;
    int *pfirst = &max;
    int *psecond = &max_2;

    LargestTwo(arr,n, pfirst, psecond);

    printf("%d %d", *pfirst, *psecond);
}