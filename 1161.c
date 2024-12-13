#include<stdio.h>
#include<string.h>

int len(char *sp) {
    int length = 0;
    while (*sp != '\0') {
        if (*sp != ' ') {
            length++;
        }
        sp++;
    }
    return length;
}


int main() {
    char str[101];
    
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("%d\n",len(str));
    return 0;
}