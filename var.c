#include <stdio.h>

int global_v=25;

void NumberPrint()
{
    int Num_local=30;
    printf("Global+50 =%d\n",global_v +50);
}

void main()
{
    int global_v=20;
    //printf("Num_local =%d\n",Num_local);
    printf("Global =%d\n",global_v);
    NumberPrint();

}
