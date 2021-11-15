//  finding remainder without using %
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter numerator: ");
    scanf("%d", &a);

    printf("Enter denominator: ");
    scanf("%d", &b);

    int q = a / b;
    int r = a - (q * b);

    printf("Remainder: %i", r);

    return 0;
}
