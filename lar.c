#include <stdio.h>

int main() {
    int a, b, c, highest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    highest = a;
    if (b > highest) {
        highest = b;
    }
    if (c > highest) {
        highest = c;
    }

    printf("The highest number is: %d\n", highest);
    return 0;
}