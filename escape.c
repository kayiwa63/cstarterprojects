
#include<stdio.h>

#define QUIT 3

int get_menu_choice(void);
void print_report(void);

void main(){


int choice =0;

while (choice!=0)
    {
        choice=get_menu_choice();
        if (choice=1)
            printf("\nBeeping the computer\a\a\a");
        else
        {
            if (choice=2)
                print_report();
        }
    }
    printf("You chose to quit!\n");


}

int get_menu_choice(void)
{

    int selection;
    for(selection=0;selection<1||selection>3;){
        printf("\n");
        printf("\n1 - Beep Computer");
        printf("\n2 - Display Report");
        printf("\n3 - Quit");
        printf("\n");
        printf("\nEnter a selection:");

        scanf("%d",&selection);}
        return selection;
        }


void print_report(void)
{
    printf("\nSAMPLE REPORT");
    printf("\n\nSequence \tMeaning");
    printf("\n=======\t======");
    printf("\n\\a\t\tbe;; (alert)");
    printf("\n\\b\t\tbackspace");
    printf("\n...\t\t...");
}
