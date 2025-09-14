//Q50: Write a program to print the following pattern:
/******
  ****
    ***
      **
        **/
#include <stdio.h>

int main() {
    int i, j, spaces, stars;
    int n = 5; // Number of rows

    for(i = 0; i < n; i++) {
        // Print leading spaces: 2*i spaces
        for(spaces = 0; spaces < 2 * i; spaces++) {
            printf(" ");
        }
        // Print stars: (n - i) stars
        for(stars = 0; stars < n - i; stars++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
