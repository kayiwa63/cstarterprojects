#include <stdio.h>
void main() {
     int start;
     long delay;
     printf("Please enter the number to start\n");
     printf("the countdown (1 to 100):");
     scanf("%d",&start); /* The countdown loop */
    do {
printf("T-minus %d\n",start); start--; for(delay=0;delay<100000;delay++); /* delay loop */
} while(start>0);
        printf("Zero!\nBlast off!\n");
         }
