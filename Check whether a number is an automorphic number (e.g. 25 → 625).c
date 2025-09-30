#include <stdio.h>

int main() {
    int num, square, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;


    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    
    if (square % (int)pow(10, digits) == num) {
        printf("%d is an automorphic number.\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }

    return 0;
}
