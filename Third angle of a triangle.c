#include <stdio.h>

int main()
{
    //To find third angle of a triangle
    int a,b,c;
    printf("Enter the value of fisrt angle :");
    scanf("%d",&a);
    printf("Enter the value of second angle :");
    scanf("%d",&b);
    printf("The value of third angle is =%d",180-(a+b));
    return 0;
    
}
