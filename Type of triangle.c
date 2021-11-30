#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of sides : ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a==b && b==c && c==a)
    printf("the triangle is equivalent");
    else if(a==b || b==c || c==a)
    printf("the triangle is isoceles");
    else
    printf("the triangle is scalene");
    return 0;
}
