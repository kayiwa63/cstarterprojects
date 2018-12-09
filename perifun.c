#include <stdio.h>

void peri(int r){
float pi = 3.14;

int pe = 2*pi*r;
printf("Perimeter = %d",pe);
}

void main()
{
    int ra;
    puts("Radius:");
    scanf("%d",&ra);

    peri(ra);
}
