#include<stdio.h>
int main()
//first 10 odd natural numbers in reverse order
{
	int i,a;
	printf("The first 10 odd natural numbers are: ");
	scanf("%d",&a);
	for(int i=a; i>=1; i--)
	{
		printf("%d\n",2*i-1);
	}
}

