#include <stdio.h>

int main() {
   int low, high, i, a;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);

   while (low < high) {
      a = 0;

      if (low <= 1) {
         ++low;
         continue;
      }

      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            a = 1;
            break;
         }
      }

      if (a == 0)
         printf("%d ", low);

      ++low;
   }

   return 0;
}
