#include<stdio.h>
int main()
{
	int num;
	printf("Enter A Value Between 1-100 : ");
	scanf("%d", &num);
	if(num>50)
	{printf("\n%d SUCCESS");
    }
	else if(num=100)
	{printf("SUCCESS",num);
	}
	else if (num<50)
	{printf("FAIL");
    }
	else {printf("You entered wrong value");
	} 
	return 0;
}


