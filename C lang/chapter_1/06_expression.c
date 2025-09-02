#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int a = (5 && 7 != (int)0 || (bool)4) ;

    printf("answer is %d",a);
    return 0;
}