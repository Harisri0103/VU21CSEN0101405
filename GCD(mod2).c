#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the numbers :");
    scanf("%d %d",&a,&b);
    for(c=1;c<=a&&c<=b;c++)
    {
        if(a%c==0 && b%c==0 )
        { d=c ;}
        
    }
    printf("GCD= %d",d);
}
