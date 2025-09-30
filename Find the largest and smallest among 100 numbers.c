#include<stdio.h>
int main () {
    int i;
    float number, largest, smallest;

    printf("Enter 100 numbers : \n");
    for(i=1;i<=100;i++) {
        scanf("%f",&number);
        if(i==1) {
            largest = number;
            smallest = number;
        }
        if(number > largest) {
            largest = number;
        }
        if(number < smallest) {
            smallest = number;
        }
    }
    printf("Largest number is : %f\nSmallest number is : %f",largest,smallest);
    return 0;
}
