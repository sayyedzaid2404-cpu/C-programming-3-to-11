/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 4: WAP to find all the prime numbers between two numbers.
 */

#include <stdio.h>

int main() {
    int start, end, temp, isPrime;

    printf("--- Prime Numbers Between Two Numbers ---\n");
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (num <= 1) {
            continue;
        }
        isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
