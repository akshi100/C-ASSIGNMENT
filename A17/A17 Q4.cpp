#include<stdio.h>
int main()
{
	int number,sum=0;
printf("Enter the numbers:");
	for(int i=1; i<=10; i++)
{
	printf("Number%d = ",i);
	scanf("%d",&number);
	
	if(number<0)
	{
		break;
	}
	sum=sum+number;
	}
	printf("The sum by skipping negative numbers= %d\n",sum);
}
