#include<stdio.h>  
int main()    
{    
 int i,j,k=0,l;
 printf("enter the number : ");
 scanf("%d",&i);
 for(j=1;j<i;j++)
 {if(i%j==0)
 {k=k+j;}}
 if(k==i)
 {printf("perfect number");}
 else {printf("Not a perfect number");}
 
return 0;  
}  
