#include <stdio.h>

void sum(int a,int b){
    int sum=a+b;
    printf("Sum = %d\n",sum);
}
void main()
//for(int i=0;i<10;i++)
{
    int x,y;
    puts("Enter two numbers.");
    puts("Number 1:");
    scanf("%d",&x);
    puts("Number 2:");
    scanf("%d",&y);
  sum(x,y);
}

