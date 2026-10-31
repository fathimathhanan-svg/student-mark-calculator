#include <stdio.h>

int main()
{
    int mark1, mark2, mark3;
    int total;
    float average;

    printf("enter 3 subjects mark; ");

    scanf("%d %d %d" , &mark1, &mark2, &mark3);

    total = mark1 + mark2 + mark3;

    average = total / 3.0;

    printf("Total marks = %d\n", total);

    printf("Average = %.2f\n", average);

    return 0;
}
