#include <stdio.h>
int main()
{
  int pi=3.14, area, circumference, radius;

  printf("Enter radius of circle: ");
  scanf("%d",&radius);

  circumference = 2 * pi * radius;
  printf("Circumference of circle is: %d",circumference);

  return 0;
}
