#include <stdio.h>
 
int main () {

   char c;
   int lcv,ucv;
   printf("enter an aplphabet : ");
   scanf("%c",&c);
   lcv = (c== 'a' || c=='e' || c=='i' || c=='o' || c=='u');
   ucv = (c== 'A' || c=='E' || c=='I' || c=='O' || c=='U');
   if(lcv || ucv)
   printf("Alphabet is vowel");
   else
   printf("Alphabet is consonant");
}
