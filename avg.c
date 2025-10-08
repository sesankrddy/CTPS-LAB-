#include<stdio.h>

int main() {
    int a, b , c;
    float avg;

    // Taking input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculating average
    avg = (a + b + c) /3 ;

    // Displaying the result
    printf("The average of %d and %d is %.2f\n", a, b, avg);

    return 0;
}