#include <stdio.h>

float expenses[13];
int count;

void main(){
    for(count=1;count<13;count++){
        printf("Enter expenses for month %d:",count);
        scanf("%f",&expenses[count]);
    }
    for(count=1;count<13;count++)
        printf("Month %d = $%.2f\n",count,expenses[count]);
}
