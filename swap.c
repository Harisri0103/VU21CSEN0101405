#include <stdio.h>

int main() {
    int a=10;
    int b=20;
    int c=30;

    a=b; 
    b=c; 
    c=a; 

    printf("\nThe value of a is %d", a);
    printf("\nThe value of b is %d", b);
    printf("\nThe value of c is %d", c);

    return 0;
    
} 
