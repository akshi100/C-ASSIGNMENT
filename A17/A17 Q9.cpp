#include<stdio.h>
int main()
{
int sum, a;
while(a != 0)
{
	printf("\n Enter a Number: ");
	scanf("%d",&a);
	sum=sum+a;
}
printf("Sum of the entered numbers is: %d",sum);
return 0;
}
