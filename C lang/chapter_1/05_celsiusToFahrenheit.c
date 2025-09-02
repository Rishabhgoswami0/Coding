#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0/5.0) + 32.0;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    printf("Temperature in Celsius: %.2f\n", celsius);
    printf("Temperature in Kelvin: %.2f\n", celsius + 273.15);
    
    return 0;
}