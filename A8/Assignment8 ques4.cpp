#include <stdio.h>
int main()
{
	int a;
	printf("Enter a Number\n",a);
	scanf("%d",&a);
	
	if (a%7==0)
	{printf("The Number is divisible by 7\n",a);
	}
	
	else if (a%3==0)
	{printf ("The number is divisible by 3\n",a);
	}
	
	else {
		printf("Not divisible by both\n");
	}
	return 0;
}
