// Q104: Write a Program to take a positive integer n as input, 
//and find the pivot integer x such that the sum of all elements between 1 and x 
//inclusively equals the sum of all elements between x and n inclusively. 
//Print the pivot integer x. If no such integer exists, print -1. 
//Assume that it is guaranteed that there will be at most one pivot integer for the given input.

// /*
// Sample Test Cases:
// Input 1:
// n = 8
// Output 1:
// 6

// Input 2:
// n = 1
// Output 2:
// 1

// Input 3:
// n = 4
// Output 3:
// -1

// */
#include <stdio.h>

// Function to calculate the sum of integers from 1 to k
long long sum_up_to(int k) {
    return (long long)k * (k + 1) / 2;
}

int main() {
    int n;
    scanf("%d", &n);

    int pivot_x = -1;

    for (int x = 1; x <= n; x++) {
        long long sum_1_to_x = sum_up_to(x);
        long long sum_x_to_n = sum_up_to(n) - sum_up_to(x - 1); // Sum from x to n

        if (sum_1_to_x == sum_x_to_n) {
            pivot_x = x;
            break;
        }
    }

    printf("%d\n", pivot_x);

    return 0;
}
