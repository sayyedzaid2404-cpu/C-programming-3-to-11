/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 6: WAP to define a counter function to print how many times
 * the function is called using storage classes.
 */

#include <stdio.h>

void counterFunction() {
    static int callCount = 0; // 'static' storage class preserves value across calls
    register int step = 1;    // 'register' storage class hint for loop/step variable
    callCount += step;
    printf("counterFunction() has been called %d time(s).\n", callCount);
}

int main() {
    int times;

    printf("--- Function Call Counter (Storage Classes) ---\n");
    printf("How many times do you want to call the counter function? ");
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        counterFunction();
    }

    return 0;
}
