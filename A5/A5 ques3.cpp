#include <stdio.h>

int main()
{
    int length, width, perimeter;
//perimeter of rectangle
    printf("Enter length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter width of the rectangle: ");
    scanf("%d", &width);

    perimeter = 2 * (length + width);

    printf("Perimeter of rectangle = %d units ", perimeter);

    return 0;
}
