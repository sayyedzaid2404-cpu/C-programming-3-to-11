/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 7(a): WAP to find the largest element in an array.
 */

#include <stdio.h>

int main() {
    int n, largest;

    printf("--- Largest Element in an Array ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", largest);

    return 0;
}
