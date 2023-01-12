#include<stdio.h>
int main()
{
     int n1, n2, n3, n4, n5, total;
     printf("Enter Marks of Five Subjects:\n");
     scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
     total = n1+n2+n3+n4+n5;
     printf("\nTotal Marks of Student = %d\n",total);
     if(n1>=33 && n2>=33 && n3>=33 && n4>=33 && n5>=33)
     {
          printf("\nCandidate is PASS\n");
     }
     else
          printf("\nCandidate is FAIL");
     return 0;
}
