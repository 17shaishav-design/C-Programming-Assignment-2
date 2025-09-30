#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; 

    while (num > 0) {
        digit = num % 10;         
        rev = rev * 10 + digit;  
        num = num / 10;           
    }

    printf("Reverse of %d = %d\n", temp, rev);

    return 0;
}
