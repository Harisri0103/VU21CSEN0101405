
#include <stdio.h>
#include <math.h>
int main()
{
   printf("\n--Finding volume of a cuboid--");
            
            float l,b,h,v;
            printf("\nEnter length of cuboid: ");
            scanf("%f", &l);

            printf("\nEnter breadth of cuboid: ");
            scanf("%f", &b);

            printf("\nEnter height of cuboid: ");
            scanf("%f", &h);
            
            v = l*b*h;
            printf("\n\tVolume of cuboid = %.2f", v);

    return 0;
}
