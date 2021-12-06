include <stdio.h>
int main() {
  int n, i=1;
  printf("Enter an integer: ");
  scanf("%d", &n);
  do 
     { 
   printf("%d * %d = %d \n", n, i, n * i);
   i++ ;
   }while(i<=20);
  return 0;
}
