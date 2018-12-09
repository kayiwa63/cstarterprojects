#include<stdio.h>
#include<string.h>

int main(void)
{
    char string1[12]="Hello";
    char string2[12]="world";
    char string3[12];

    strcpy(string3,string1);
    strcat(string1,string2);
    int lengthofstring1= strlen(string1);

    printf("strcpy = %s\n",string3);
    printf("strcat = %s\n",string1);
    printf("strlen = %d\n",lengthofstring1);

    strcmp
}
