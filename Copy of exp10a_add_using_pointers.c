/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 10(a): WAP to add two numbers using pointers.
 */

#include <stdio.h>

int main() {
    float num1, num2, sum;
    float *ptr1 = &num1;
    float *ptr2 = &num2;
    float *ptrSum = &sum;

    printf("--- Add Two Numbers Using Pointers ---\n");
    printf("Enter first number: ");
    scanf("%f", ptr1);

    printf("Enter second number: ");
    scanf("%f", ptr2);

    *ptrSum = *ptr1 + *ptr2;

    printf("Sum of %.2f and %.2f is: %.2f\n", *ptr1, *ptr2, *ptrSum);

    return 0;
}
