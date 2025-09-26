#include <stdio.h>
#include <stdarg.h>

int sumall(int count,...){
    //declararing list
    va_list args;
    int sum = 0;
    int i ;
    //initializing the argument list 
    va_start(args,count);

    for(i=0;i<count;i++){
        //now accessing each number for operation
        sum = sum + va_arg(args, int);
    }
    va_end(args);
    return sum;
}
int main() 
{
    printf("sum of the 3 numbers: %d\n",sumall(3,49,56,46));
    printf("sum of the 5 numbers: %d\n",sumall(5,2,3,4,5,9));
    return 0;
}