//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 1.0; // First term is 1
    float numerator = 3.0;
    float denominator = 4.0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2.0;
        denominator += 2.0;
    }
    
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
