#include<stdio.h>
int main()
{
	int f, c;
	printf("Temperature Of City In Fahrenheit Degree: ");
	scanf("%d", &f);
	c = (f-32)*5/9;
	printf("Temperature Of City In Centigrade Degree Is: %d",c);
	return 0;
}
