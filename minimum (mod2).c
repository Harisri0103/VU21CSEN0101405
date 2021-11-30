#include <stdio.h>

int main() 
{
int a,b,c;
printf("enter the values : ");
scanf("%d,%d,%d",&a,&b,&c);
if (a>b && b>c)
printf("%d is minimum",c );
else if (b>a && c>a)
printf("%d is minimum", a  );
else
printf ("%d is minimum", b);
return 0;

}
