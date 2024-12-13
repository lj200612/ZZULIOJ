#include<stdio.h>
void FindMax(int p[][3], int m, int n, int *pRow, int *pCol){
    int maxVal = p[0][0];
    *pRow = 0; 
    *pCol = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i][j] > maxVal) {
                maxVal = p[i][j];
                *pRow = i;
                *pCol = j;
            }
        }
    }
    
}


int main() {
    int arr[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxRow, maxCol;
    FindMax(arr, 2, 3, &maxRow, &maxCol);
    
    printf("%d %d %d", arr[maxRow][maxCol], maxRow, maxCol);

    return 0;
}