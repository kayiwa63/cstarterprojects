#include<stdio.h>

int getSum(int *array_val,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
            sum=sum+array_val[i];

    return sum;

}

void main()
{
    int my_array[4]={10,20,30,40};

    int mySum = getSum(my_array,4);

    printf("sum is %d",mySum);
}
