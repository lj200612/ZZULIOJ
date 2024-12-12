#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int a[n], b[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);  
    }

    int max_honesty = a[0] - b[0];  
    int max_honest_cat = 1; 
    int max_total_talk = a[0] + b[0];

    for (int i = 1; i < n; i++) {
        int honesty = a[i] - b[i];  
        int total_talk = a[i] + b[i]; 

        
        if (honesty > max_honesty) {
            max_honesty = honesty;
            max_honest_cat = i + 1;  
            max_total_talk = total_talk;
        }
       
        else if (honesty == max_honesty && total_talk > max_total_talk) {
            max_honest_cat = i + 1; 
            max_total_talk = total_talk;
        }
    }

    printf("%d %d\n", max_honest_cat, max_honesty);

    return 0;
}