#include <stdio.h>  
int main() 
 {  
int n1,n2,sum,difference,product,choice;
float q;
printf("Enter your 1st value here:\n");
scanf("%d",&n1);

printf("Enter your 2nd value here:\n");
scanf("%d",&n2);

printf("TYPE 0 : no operation\n ");
printf("TYPE 1 : For sum of %d and %d\n",n1, n2);
printf("TYPE 2 : For difference of %d and %d\n",n1, n2);
printf("TYPE 3 : For finding product of %d and %d\n",n1, n2);
printf("TYPE 4 : finding quotient of %d and %d\n",n1, n2);
printf("Enter your choice here : ");
scanf("%d",&choice);

switch(choice)
{
 case 1 :
{printf("For sum of %d and %d:\n",n1, n2);
sum =n1+n2;
printf("%d = %d + %d \n",sum, n1, n2);
printf("Sum of %d and %d is %d\n",n1, n2, sum);
break;}

case 2 : 
{
printf("For finding difference of %d and %d:\n",n1, n2);
difference=n1-n2;
printf("%d = %d - %d\n",difference, n1, n2);
printf("Difference of %d and %d is %d \n",n1, n2, difference);
break;}

case 3 : 
{
printf("For finding product of %d and %d:\n",n1, n2);
product=n1*n2;
printf("%d = %d * %d\n",product, n1, n2);
printf("\n");
printf("Product of %d and %d is %d\n",n1, n2, product);
break;}

case 4 : 
{
printf("for quotient of %d and %d:\n",n1, n2);
q=n1/n2;
printf("%f = %d/%d\n",q, n1, n2);
printf("\n");
printf("Quotient of %d and %d is %f\n",n1, n2, q);
break;}

case 0 :
{printf("For no operation\n");}
}
return 0;
}
