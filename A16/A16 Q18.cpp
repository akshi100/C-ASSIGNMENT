#include <stdio.h>

int main(){
    int num,r,sum=0,a;

    printf("Input  a number: ");
    scanf("%d",&num);

    for(a=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum+(r*r*r);
    }
    if(sum==a)
         printf("%d is an Armstrong number.\n",a);
    else
         printf("%d is not an Armstrong number.\n",a);

}
