#include<stdio.h>
int main() {    

    int num1, num2, product;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);      
    product = num1*num2;
    printf("The Product Is:");
    printf("%d * %d = %d", num1, num2, product);
    return 0;
}
