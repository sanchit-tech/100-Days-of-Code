// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

// /*
// Sample Test Cases:
// Input 1:
// 10 2
// Output 1:
// Sum=12, Diff=8, Product=20, Quotient=5

// Input 2:
// 7 3
// Output 2:
// Sum=10, Diff=4, Product=21, Quotient=2

// */
#include <stdio.h>
int main(){
    int a,b,sum,dif,prod,quo;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    sum=a+b;
    dif=a-b;
    prod=a*b;
    quo=a/b;
    printf("sum=%d\n",sum);
    printf("difference=%d\n",dif);
    printf("product=%d\n",prod);
    printf("Quotient=%d\n",quo);
    return 0;
}