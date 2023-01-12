#include <stdio.h>

int main()
{
    int a, n;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

    for(a=1; a<=n; a++)
    {
        printf("%d\n", a);
    }

    return 0;
}
