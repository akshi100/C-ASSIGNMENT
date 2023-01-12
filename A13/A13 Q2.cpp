#include<stdio.h>
int main()
{
int a,b,c,d,e,f,z;
printf("Enter 1st no\n");
scanf("%d",&a);
printf("Enter 2nd no\n");
scanf("%d",&b);
printf("Enter choice 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n\n");
scanf("%d",&z);
switch(z)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
d=a-b;
printf("%d",d);
break;
case 3:
e=a*b;
printf("%d",e);
break;
case 4:
f=a/b;
printf("%d",f);
break;
}
return 0;
}
