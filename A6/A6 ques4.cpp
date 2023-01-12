#include<stdio.h>
int main()
{
    int km, cm, mm, in;
    printf("Enter distance in kilometers: ");
    scanf("%d", &km);
    cm = km * 1000 * 100;
    mm = km * 1000000;
    in = km * 39370.08;
    printf("The distance in cm: %d\n", cm);
    printf("The distance in mm: %d\n", mm);
    printf("The distance in inches: %d\n", in);
    
    return 0;
}
