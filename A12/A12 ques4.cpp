#include<stdio.h>
int main()
//program to calculate factorial of a number
{
	int n,i,f=1;
	printf("Enter The Number: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	f=f*i;
	printf("The factorial of %d is: %d\n",n,f);	
}
