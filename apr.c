#include<stdio.h>

void getValue(int *myptr)
{
    *myptr=10000;
    return;
}

void main()
{
    int gtv;
    getValue(&gtv);

    printf("the value of gtv = %d",gtv);
}
