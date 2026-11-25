/*
 * Name     : Zaid Sayyed
 * UIN      : 261P029
 * Roll No. : 44
 * Division : B
 * Location : Mumbai - 400070
 */
/*
 * Experiment 8(b): WAP to check if the entered string is palindrome or not.
 */

#include <stdio.h>

int main() {
    char str[200];
    int len = 0, isPalindrome = 1;

    printf("--- Palindrome String Checker ---\n");
    printf("Enter a string: ");
    scanf(" %s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a Palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a Palindrome.\n", str);
    }

    return 0;
}
