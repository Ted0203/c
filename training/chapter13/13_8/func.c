#include <stdio.h>

void func(void)
{
    extern int a;
    a=300;
    printf("a=%d\n", a);
    
}
