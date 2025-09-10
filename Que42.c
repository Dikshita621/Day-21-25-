//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of proper divisors
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}

