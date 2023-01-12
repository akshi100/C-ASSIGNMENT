#include<stdio.h>
int main()
{
int n1, n2, n3, n4, n5, total;
     
printf("Enter Marks of Five Subjects:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    total = n1+n2+n3+n4+n5;
    if(n1>=33 && n2>=33 && n3>=33 && n4>=33 && n5>=33)
    {
    printf("\nCANDIDATE PASSED = %d\n",total);
    printf("\nCANDIDATE PASSED\n");
}
    else
   printf("\nStudent is FAIL");
return 0;
}


