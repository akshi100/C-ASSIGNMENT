#include<stdio.h>
int main()
{
int km, mm;
	printf("Enter The Distance In Kilometers: ");
	scanf("%d", &km);
	mm = km*1000000;
	printf("The Distance In Millimeters: %d\n",mm);
	return 0;
}
