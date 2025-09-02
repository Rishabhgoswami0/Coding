#include <stdio.h>

int main() 
{
    float length, width, radius;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("The area of the rectangle is: %.2f\n", length * width);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("The area of the circle is: %.2f\n", 3.14159 * radius * radius);

    printf("The area of the square with side length %.2f is: %.2f\n", length, length * length);
    
    printf("The area of the triangle with base %.2f and height %.2f is: %.2f\n", length, width, 0.5 * length * width);
    return 0;
}