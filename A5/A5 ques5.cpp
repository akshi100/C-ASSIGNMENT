
 //C Program to find perimeter of a square

#include <stdio.h>
 
int main(){
 int side, perimeter;
 printf("Enter length of side of Square\n");
 scanf("%d", &side);
 //Perimeter of Square = 4 X Side 
 perimeter = 4*side;
 printf("Perimeter of Square : %d\n", perimeter);
 return 0;
}
