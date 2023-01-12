#include<stdio.h>
int main()
//to print N natural numbers in reverse order
{
	int i,a;
	printf("Enter Starting Value: ");
	scanf("%d",&a);
	for(i=a; i>=1; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}
