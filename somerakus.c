#include<stdio.h>

int main(void)
{
    int Mynum [2] [3]={
    {1,3,2},
    {5,6,8}
    };

for(int i=0,j=0;i<2&&j<3;i++,j++)
    printf("Mynum [%d] [%d]=%d \n",i,j,Mynum[i][j]);

}

