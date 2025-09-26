#include <stdio.h>
long long fibonacci_recu(int n){
    if(n == 0)
        return 0;
    if(n ==1)
        return 1;
    return fibonacci_recu(n-1) + fibonacci_recu(n-2);
}
int main() 
{
    int n;
    printf("Enter the number of fibonacci term you want: ");
    scanf("%d",&n);
    long long result = fibonacci_recu(n);
    printf("The %dth term of fibonacci series is %lld\n\n",n,fibonacci_recu(n));
    printf("the %d term fibonacci series is :",n);
    for(int i = 0 ; i <= n; i++){
        printf("%lld ",fibonacci_recu(i));
    }
    return 0;
}