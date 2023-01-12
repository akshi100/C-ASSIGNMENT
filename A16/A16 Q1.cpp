#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Sum of first n natural numbers is: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
