#include<stdio.h>
int main() {
    int i, n, sum = 0;

    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("First %d odd numbers are: \n", n);

    for(i = 1; i <= (2*n); i++) {
        if(i % 2 != 0) {       
            printf("%d\n", i);
            sum = sum + i;    
        }
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
