#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, sub, mult;  
    float div;  
  
    printf("Enter any two numbers : ");  
    scanf("%d,%d", &num1, &num2);  
  
    //all arithmetic operations 
    
    sum = num1 + num2;  
    sub = num1 - num2;  
    mult = num1 * num2;  
    div = num1 / num2;  
  
    //result of all arithmetic operations 
      
    printf("The sum of the two numbers : %d\n", sum);  
    printf("The difference of the two numbers : %d\n", sub);  
    printf("The product of the two numbers : %d\n", mult);  
    printf("The quotient of the two numbers : %f\n", div);    
  
    return 0;   
}
