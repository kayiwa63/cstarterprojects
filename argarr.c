#include <stdio.h>

int ArraySum(int MyArray[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum=sum+MyArray[i];

    return sum;
}

void main()
{
    int MyNumberArray[7]={20,30,60,50,55,30,100};
    int sumofarray=ArraySum(MyNumberArray,7);

    printf("Arra sum = %d",sumofarray);
}
