#include<stdio.h>
main()
{
    int n,i,sum;
    i=1,sum=0;
    printf("Enter your value:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        ++i;
    }
    printf("Sum of squares of numbers is :%d ",sum);
}
