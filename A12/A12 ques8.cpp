#include<stdio.h>
int main()
//to print first 10 odd natural numbers
{
	printf("The first 10 odd natural numbers are: ");
	for(int i=1; i<=10; i++)
	{
		printf("%d\n",2*i-1);
	}
}
