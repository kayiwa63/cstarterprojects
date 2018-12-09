#include <stdio.h>

void main()
{
    int marks = 60;

    /*printf("Enter a mark:");
    scanf("%d",&marks);*/

    switch (marks)
    {
    case 90:
        printf("Excellent");
        break;
    case 75:
        printf("Very Good");
        break;
    case 60:
        printf("Good");
        break;
    case 40:
        printf("Okay");
        break;
    default:
        printf("Grade unavailable");
    }
}
