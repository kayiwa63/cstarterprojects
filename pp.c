#include<stdio.h>

int ppm(int *p)
{
    *p=*p+2;

    printf("%d",*p);
}

void main()
{
    int a=3;

    ppm(&a);
}
