#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    printf("GCD is: %d", a);

    return 0;
}
