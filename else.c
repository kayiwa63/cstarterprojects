/* Demonstrates the use of if statement with an else clause */

#include<stdio.h>

int x,y;

main(void)
{
    /* Input the values to be tested */

    printf("\nInput an integer value of x:");
    scanf("%d",&x);
    printf("\nInput an integer value of y:");
    scanf("%d",&y);

    /* Test values and print result */

    if(x==y)
        printf("x is equal to y\n");
    else
        if(x>y)
        printf("x is greater than y\n");
    else
        printf("x is smaller than y\n");
}
