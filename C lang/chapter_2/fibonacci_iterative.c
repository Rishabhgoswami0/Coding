#include <stdio.h>

int main() 
{
    int prev = 1 ;//n-1
    int prev_prev = 0 ;//n-2
    int n = 10;
    printf("%d %d",prev_prev,prev);
    for(int i = 2 ; i <= n+1; i++){
        int curr = prev + prev_prev;
        printf(" %d", curr);
        prev_prev = prev;
        prev = curr;
    }
    return 0;
}