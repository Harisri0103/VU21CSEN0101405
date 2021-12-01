#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g,ch;
    printf("Enter the values : ");
    scanf("%d %d",&a,&b);
    printf("\nEnter the operation  \n 1.Addition \n 2.Difference \n 3.Multiplication \n 4.Division \n 5.Mod \n ");
    scanf("%d",&ch);
    
    switch(ch)
    {
         case 1:
         c=a+b;
         printf(" Sum of two numbers is :%d ",c);
         break; 
         case 2:
         d=a-b;
         printf(" Difference of two numbers is :%d ",d);
         break;
         case 3:
         e=a*b;
         printf(" Multiplication of two numbers is :%d ",e);
         break;
         case 4:
         f=a/b;
         printf(" Division of two numbers is :%d ",f);
         break; 
         case 5:
         g=a%b;
         printf(" Mod of two numbers is :%d ",g);
         break;
         default:
         printf(" error || enter correct choice ");
    }
        
        
    
 
        return 0;

            
}
