#include<stdio.h>
int main()
{
    int hindi, maths, english, science, social, aggregate;
    printf("Enter the marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks of Maths: ");
    scanf("%d", &maths);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    printf("Enter the marks of Social: ");
    scanf("%d", &social);

    aggregate = hindi+maths+english+science+social;

    printf("\nAggregate marks: %d", aggregate);
}
