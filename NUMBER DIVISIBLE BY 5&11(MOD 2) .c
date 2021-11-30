#include <stdio.h>

int main() 
{
int a;
printf("enter the values : ");
scanf("%d",&a);
if (a%5==0 && a%11==0)
printf("Number is divisible by 5 & 11");
else
printf("Number is not divisible by 5 & 11");
return 0;

}
