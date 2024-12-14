#include <stdio.h>

void peri(double r)
{
    extern double pi;

    printf("peri=%.2f\n", 2*r*pi);
}
