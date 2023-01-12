#include<stdio.h>
int main()
{
	int feet, inches;
	printf("Height Of Student In Feet: ");
	scanf("%d", &feet);
	inches = feet*12;
	printf("Height In Inches: %d\n",inches);
	return 0;
}
