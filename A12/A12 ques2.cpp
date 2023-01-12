//program to print N Natural numbers

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter any number of your choice: ");
	scanf("%d",&n);
	printf("Natural Numbers from 1 to %d: \n",n);
	for(i=1; i<=n; i++)
	{
		printf("%d\n",i);
	}
	return 0;
}
