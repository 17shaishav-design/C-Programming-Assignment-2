#include <stdio.h>

int main() {
    int num, rev = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        digit = num % 10;         
        rev = rev * 10 + digit; 
        num = num / 10;           
    }

    if (rev == temp) {
        printf("%d is a palindrome.\n", temp);
    } else {
        printf("%d is not a palindrome.\n", temp);
    }

    return 0;
