#include <stdio.h>

void area(double r)
{
    extern double pi;

    printf("area=%.2f\n", pi*r*r);
    
}
