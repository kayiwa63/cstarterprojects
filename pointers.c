#include <stdio.h>

int main()
{
    int val=30;
    int *ptr_p;
    ptr_p=&val;

    printf("address of val = %x\n",&val);
    printf(" value of pointer variable = %x\n",ptr_p);
    printf(" value of pointer = %d\n",*ptr_p+2);

}

