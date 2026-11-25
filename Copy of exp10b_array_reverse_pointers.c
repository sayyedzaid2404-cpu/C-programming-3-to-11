/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 10(b): WAP to print the elements of an array in reverse order
 * using pointers.
 */

#include <stdio.h>

int main() {
    int n;

    printf("--- Print Array in Reverse Order Using Pointers ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
