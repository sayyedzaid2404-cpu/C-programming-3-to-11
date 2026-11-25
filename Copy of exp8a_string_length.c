/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 8(a): WAP to find the length of a string without using library function.
 */

#include <stdio.h>

int main() {
    char str[200];
    int length = 0;

    printf("--- String Length Without Library Function ---\n");
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of \"%s\" is: %d\n", str, length);

    return 0;
}
