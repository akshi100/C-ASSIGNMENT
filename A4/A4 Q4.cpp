#include<stdio.h>
int main() {    

    int num1, num2, divide;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);      
    divide = num1/num2;
    printf("%d / %d = %d", num1, num2, divide);
    return 0;
}
