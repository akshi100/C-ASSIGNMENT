#include<stdio.h>
/* Convert Fahreheit temperature to Celsius equivalent*/
int main()
{
	
	int fahr, celc
	ius;
	printf("Enter temperature is Fahr\n");
	scanf("%d",&fahr);
	celcius = 5/9* (fahr-32);
	/*
	Uncomment the following and test your output (comment the previous celsius calculations)
	//celcius = 5 * (fahr-32) / 9;
	//celcius = 5.0/9 * (fahr-32);
	*/
	printf("Temperature in Celsius is = %d\n",celcius);
	
	return 0;
}
