#include<stdio.h>
int main()
{
    int hindi, maths, english, science, social, percentage, average, total;

    printf("Enter the marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks of Math: ");
    scanf("%d", &maths);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    printf("Enter the marks of Art: ");
    scanf("%d", &social);

    total = hindi+maths+english+science+social;

    percentage = total/5;
    average = total/500;

    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %d", percentage);
    printf("\nAverage marks: %d", average);
}

