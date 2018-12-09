#include <stdio.h>

int main(void)
{
    int age;
    printf("Please enter the age:");
    scanf("%d",&age);
    if(age>18){
       // printf("Person is adult.\n");
       if(age <21){
        printf("This is a young adult.");
       }else{
       printf("Very old adult.");
       }
    }
    else if(age<18){
        printf("Person is minor.");
    }
    else{
        printf("Person is exactly adult.");
    }

}
