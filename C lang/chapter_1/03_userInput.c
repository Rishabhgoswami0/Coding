#include <stdio.h>

int main(void)
{

    int num1, num2;
    printf("Enter first numeber:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    printf("The summation of %d and %d is %d\n", num1, num2, num1+num2);
    printf("The subtraction of %d and %d is %d\n", num1, num2, num1-num2);
    printf("The multiplication of %d and %d is %d\n", num1, num2, num1*num2);
    printf("The division of %d and %d is %d\n", num1, num2, num1/num2);
    return 0;
}