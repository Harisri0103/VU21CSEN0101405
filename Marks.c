#include <stdio.h>
int main(){
    float a,b,c,d,e,f,g,h,i;
    printf("Enter full marks=");
    scanf("%f",&h);
    printf("Enter Marks in First Subject:");
    scanf("%f",&a);
    printf("Enter Marks in Second Subject:");
    scanf("%f",&b);
    printf("Enter Marks in Third Subject:");
    scanf("%f",&c);
    printf("Enter Marks in Fourth Subject:");
    scanf("%f",&d);
    printf("Enter Marks in Fifth Subject:");
    scanf("%f",&e);
    g=(a+b+c+d+e);
    f=(a+b+c+d+e)/5;
    i=((a+b+c+d+e)/h)*100;
    printf("Percentage = %f",i);
    printf("\nTotal Marks= %.2f \n",g);
    printf("Average of 5 Subjects= %f",f);
   return 0; 
}   
