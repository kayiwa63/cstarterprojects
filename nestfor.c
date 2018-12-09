#include <stdio.h>
void drawbox(int row,int column)
{
    //int col;
    for (;row>0;row--)
    {
        for (;column>0;column--)
            printf("X");
        printf("\n");
    }
}
void main(){
drawbox(8,35);
}

