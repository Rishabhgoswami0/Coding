#include <stdio.h>
void startupFun(void)__attribute__((constructor)); //the function run before the main function
void cleanupFun(void)__attribute__((destructor)); //the function automatically runs after main function
// defining the functions 
void startupFun(void){
    printf("Startup function runs before main function\n");
}

void cleanupFun(void){
    printf("Cleanup Function runs after main function");
}
int main() 
{
    printf("Hello i'm main function\n");
    return 0;
}