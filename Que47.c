//Q47: Write a program to print the following pattern:
*/*
**
***
****
******/
#include <stdio.h>

int main() {
    int i, j;
    // Loop for 5 rows
    for(i = 1; i <= 5; i++) {
        // Print i stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to next line after each row
        printf("\n");
    }
    return 0;
}
