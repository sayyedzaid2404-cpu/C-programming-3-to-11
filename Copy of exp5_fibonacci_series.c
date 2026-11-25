/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 5: Write a program to generate Fibonacci series for N terms
 * using iterative and recursive methods.
 */

#include <stdio.h>

int fibonacciRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void fibonacciIterative(int terms) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Iterative Fibonacci series (%d terms): ", terms);
    for (int i = 1; i <= terms; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;

    printf("--- Fibonacci Series Generator ---\n");
    printf("Enter number of terms (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    fibonacciIterative(n);

    printf("Recursive Fibonacci series (%d terms): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");

    return 0;
}
