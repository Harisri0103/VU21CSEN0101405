#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    printf("Enter the value for c: ");
    scanf("%d", &c);

    if (a>b) {
        if (a>c) {
            printf("a is largest.");
        } else { //a < c
            printf("c number is largest.");
        }
    } else { 
        if (b>c) {
            printf("b is largest.");
        } else { 
            printf("c is largest.");
        }
    }

    return 0;
}
