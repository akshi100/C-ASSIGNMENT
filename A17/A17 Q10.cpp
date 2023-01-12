#include<stdio.h>
int main()
{
	int number,sum=0;
printf("Enter the numbers:");
	for(int i=1; i<=10; i++)
{
	printf("Number%d = ",i);
	scanf("%d",&number);
	
	if(number%2==0)
	{
		continue;
	}
	sum=sum+number;
	}
	printf("The sum by adding odd numbers and skipping the even numbers= %d\n",sum);
}
