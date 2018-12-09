#include<stdio.h>

void perimeter(int *p){

    int pe=2*3.14**p;

    printf("p=%d",pe);
    }
 int main(void){
     int r;
      puts("Enter the radius:");
    scanf("%d",&r);
 perimeter(&r);
 }
