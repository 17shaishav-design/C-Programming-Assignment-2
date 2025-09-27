#include<stdio.h>
int main () {
    int i,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("First %d even numbers are : \n",n);
    
    for(i=1; i<=n; i++) {
        printf("%d\n", 2*i);   // prints 2,4,6,...
    }
    
    return 0;
}
