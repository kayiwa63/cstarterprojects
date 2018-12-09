#include <stdio.h>

int Product(int a,int b)
{
    return (a*b);
}

int main(void)
{
    int x,y;
    puts("Enter two numbers.");
    puts("Number 1:");
    scanf("%d",&x);
    puts("Number 2:");
    scanf("%d",&y);

    int prod;
  prod = Product(x,y);

  printf("Product = %d",prod);
}
