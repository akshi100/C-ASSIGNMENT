#include<stdio.h>
int main()
{
    int hindi, maths, english, science, social, total;
    float percentage;
    printf("Enter the marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks of Maths: ");
    scanf("%d", &maths);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    printf("Enter the marks of social: ");
    scanf("%d", &social);

    total = hindi+maths+english+science+social;

    percentage = total/5;

    printf("\nPercentage marks::%.2f\n",percentage);
    return 0;
}
