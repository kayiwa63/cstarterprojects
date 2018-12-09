#include <stdio.h>

int main()
{
    int val_array[3]={30,40,50};
    int *ptr_array[3];

    for(int i=0;i<3;i++)
    {
        ptr_array[i]=&val_array[i];
    }
    for(int i=0;i<3;i++)
        printf("value of val_array[%d]=%d\n",i,*ptr_array[i]);


}


