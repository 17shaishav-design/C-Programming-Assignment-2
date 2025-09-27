#include<stdio.h>
int main () {
    int i,n,sum=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    
    printf("First %d even natural numbers are : \n",n);
    for(i=1;i<=(2*n);i=i+2) {
        sum = sum + i ;
    }
    printf("Sum of first %d even natural numbers is : %d",n,sum);
    return 0;
}
