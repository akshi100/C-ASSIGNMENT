#include<stdio.h>
int main()
{
	for(int i=1; i<=12; i++)
	{
		if (i==10)
		{
			continue;
		}
		printf("%d",i);
	}
	return 0;
}


