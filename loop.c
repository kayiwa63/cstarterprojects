#include<stdio.h>

int main(void)
{
    int row=0,column=1;
    while (row<=1){
        column =1;
        while (column<=4){
            printf("*");
            column++;
        }
        printf("\n");
        row++;
    }
}
