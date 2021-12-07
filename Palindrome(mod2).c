#include<stdio.h>  
int main()    
{    
 int i,j=0,k,r;
 printf("enter your number :");
 scanf("%d",&i);
 k=i;
 while(i!=0){
     r=i%10;
     j= j*10+r;
     i=i/10;
 }
 if(k==j)
 { 
     printf("The number is palindrome");
 }
 else printf("number is not a palindrome");
     
     
return 0;  
}  
