#include <stdio.h>
int sum(int);
int main() {
    int n,r;

   
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    r=sum(n);
    printf("%d",r);
}
int sum(int n) 
{
    
    if (n == 0) {
    
       return 0;
    }
    
    else {
        return n + sum(n - 1);
    }
}


