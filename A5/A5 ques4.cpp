#include <stdio.h>
 
int main(){
    int side, area;
    printf("Enter length of side of square\n");
    scanf("%d", &side);
    /* Area of Square = Side X Side */
    area = side * side;
    printf("Area of square : %d\n", area);
    return 0;
}
