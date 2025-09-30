#include<stdio.h>
int main () {
    int i,n;
    float sum=0, mean, value;

    printf("Enter value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        printf("Enter value %d : ",i);
        scanf("%f",&value);
        sum = sum + value ;
    }
    mean = sum / n ;
    printf("Sum is : %f\nMean is : %f",sum,mean);
    return 0;
}
