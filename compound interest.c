#include <stdio.h>
#include <math.h>

int main() {
  float p,t,r;
  printf("Enter the pricipal value :");
  scanf("%f",&p);
  printf("Enter the Rate of interest :");
  scanf("%f",&r);
  printf("Enter Time :");
  scanf("%f",&t);
  // Compound interest = p*(pow( 1+r/100,t)-1)
  printf("Compound interest = %.2f",p*(pow(1+r/100,t)-1));
    return 0;
}
