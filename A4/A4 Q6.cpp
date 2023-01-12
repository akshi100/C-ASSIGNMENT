#include<stdio.h>
int main()
{
	int km, m;
	printf("Enter The Distance In Kilometers: ");
	scanf("%d", &km);
	m = km*1000;
	printf("The Distance In Meters Is: %d\n", m);
	return 0;
}
