#include<stdio.h>
int main()
//first 10 even natural numbers in reverse order
{
	int i,a;
	printf("The first 10 even natural numbers are: ");
	scanf("%d",&a);
	for(int i=a; i>=1; i--)
	{
		printf("%d\n",2*i);
	}
}
