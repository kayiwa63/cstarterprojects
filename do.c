#include<stdio.h>
void main(){
int k=2,t=0;
do{
    t=t+k;
    k=k+2;}
    while(k<=50);
    printf("total=%d",t);
}
