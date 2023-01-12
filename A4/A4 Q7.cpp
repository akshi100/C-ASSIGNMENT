#include<stdio.h>
int main()
{
int km, cm;
	printf("Enter The Distance In Kilometers: ");
	scanf("%d", &km);
	cm = km*1000*100;
	printf("The Distance In Centimeters is: %d\n",cm);
	return 0;	
}
