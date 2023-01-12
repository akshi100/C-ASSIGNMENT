#include<stdio.h>
int main()
//program to print Hello World on screen n number of times
{
	int n,i;
	printf("How many times do you want to print Hello World: ");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Hello World\n");
		i++;
	}
	printf("End");
	return 0;
}
