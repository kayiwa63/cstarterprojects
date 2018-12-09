#include <stdio.h>

int global_v=25;

void NumberPrint()
{
    printf("Global +50=%d\n",global_v + 50);
}


void main()
{
    int global_v=20;
    printf("Global = %d\n",global_v);

    NumberPrint();
}
