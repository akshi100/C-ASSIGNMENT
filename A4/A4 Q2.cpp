#include <stdio.h>
int main() {    

    int num1, num2, subtract;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);      
    subtract = num1-num2;
    printf("%d - %d = %d", num1, num2, subtract);
    return 0;
}
