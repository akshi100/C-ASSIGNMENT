#include<stdio.h>
 int main()
{
    int n,i,sum;
    i=1,sum=0;
    printf("Enter your value:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i*i;
        ++i;
    }
    printf("Sum of cubes of numbers is :%d ",sum);
}
