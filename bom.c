#include <stdio.h>
#define COUNT 20000000 /* 20,000,000 */
void dropBomb(void); /* prototype */
void delay(void);
int deaths;
int main() {
    char x;
    deaths=0;
        for(;;)
            {
printf("Press ~ then Enter to quit\n");
printf("Press Enter to drop the bomb:");
x=getchar();
fflush(stdin); /* clear input buffer */ if(x=='~') { break;
}

    printf("Press Enter to drop the bomb:");
    x=getchar();
    dropBomb();
    printf("Key code %d used to drop bomb.\n",x);
    return(0); }
    void dropBomb() {
        int x; for(x=20;x>1;x--) {
            puts(" *");
            delay(); }
            puts(" BOOM!"); }
            void delay() {
                long int k;
                for(x=0;k<COUNT;k++) ; }
