#include<stdio.h>
int main () {
    int i, sum=0;
    float mean;
    printf("Enter 10 values : \n");
    for(i=1;i<=10;i++) {
        int value;
        scanf("%d",&value);
        sum = sum + value ;
    }
    mean = sum / 10.0 ;
    printf("Sum is : %d\nMean is : %f",sum,mean);
    return 0;
}
