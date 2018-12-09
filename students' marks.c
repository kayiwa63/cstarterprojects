#include<stdio.h>

#define MAX_GRADE 100
#define STUDENTS 10

int grades[STUDENTS];

int idx;
int total=0;

void main()
{
    for (idx=1;idx<=STUDENTS;idx+1)
    {
        printf("Enter Person %d's grade:",idx++);
        scanf("%d",&grades[idx]);

        while(grades[idx]> MAX_GRADE)
        {
            printf("\nThe highest grade is %d",MAX_GRADE);
            printf("\nEnter correct grade:");
            scanf("%d",&grades[idx]);
        }
        total+=grades[idx];
    }
    printf("\n\nThe average score is %d\n",(total/STUDENTS));
}
