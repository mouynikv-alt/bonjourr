#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("> Basic mathematics are:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division: %d / %d = %.1f, and Modulo: %d%%%d = %d\n",
               a, b, (float)a / b, a, b, a % b);
    } else {
        printf("Division and Modulo: cannot divide by zero\n");
    }

    return 0;
}
