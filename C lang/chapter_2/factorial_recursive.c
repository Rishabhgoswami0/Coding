#include <stdio.h>
long long fact(int n){
    if(n<0) return -1;
    if(n == 0 || n == 1)
        return 1;
    return n * fact(n-1);
}
int main() 
{
    int num;
    printf("Ente the number whose factorial you want: ");
    scanf("%d",&num);
    //calling factorial function
    printf("the factorial of %d is : %lld",num,fact(num));
    return 0;
}