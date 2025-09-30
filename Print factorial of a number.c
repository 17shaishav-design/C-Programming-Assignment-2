#include<stdio.h>
int main ( ) {
    int i,n,factorial=1;

    printf("Enter value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        factorial = factorial * i ;
    }
    printf("Factorial of %d is : %d",n,factorial);
}
