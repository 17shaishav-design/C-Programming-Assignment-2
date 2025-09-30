#include<stdio.h>
int main () {
    int i, positive=0, negative=0, zero=0, value;

    printf("Enter 200 values : \n");
    for(i=1;i<=200;i++) {
        printf("Enter value %d : ",i);
        scanf("%d",&value);
        if(value > 0) {
            positive++;
        } else if(value < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    printf("Positive numbers : %d\nNegative numbers : %d\nZeroes : %d",positive,negative,zero);
    return 0;
}
