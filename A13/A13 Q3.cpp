#include <stdio.h>

int main()
{
    int choice, b, f, p, s, Burger, French, Pizza, Sandwiches;
    printf("1.Burger\n2.French Fries\n3.Pizza\n4.Sandwiches\n");
    printf("Please select your choice from 1,2,3,4\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You selected Burger.\n");
        printf("Please select quantity : ");
        scanf("%d", &b);
        Burger = 200 * b;
        printf("Your bill is : %d", Burger);
        break;
    case 2:
        printf("You selected French Fries. \n");
        printf("Please select quantity : ");
        scanf("%d", &f);
        French = 50 * f;
        printf("Your bill is %d", French);
        break;
    case 3:
        printf("You selected Pizza.\n");
        printf("Please select quantity : ");
        scanf("%d", &p);
        Pizza = 500 * p;
        printf("Your bill is %d", Pizza);
        break;
    case 4:
        printf("You selected Sandwiches.\n");
        printf("Please select quantity : ");
        scanf("%d", &s);
        Sandwiches = 150 * s;
        printf("Your bill is %d", Sandwiches);
        break;
    default:
        printf("Invalid choice");
        break;
    }
}
