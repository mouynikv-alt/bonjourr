#include<stdio.h>
int main(){
    int a,b;

    printf("INPUT:\n");
    printf("Enter a:");
    scanf("%d, &a");
    printf("Enter b:");
    scanf("%d, &b");

    printf("\n OUTPUT:\n");
    printf("Basics mathemathics are:");
    printf("Addition: %d + %d = %d\n", a,b, a+b);
    printf("Subtraction: %d + %d = %d\n", a,b,a-b);
    printf("Multiplication: %d * %d = %d\n", a,b,a*b);
    printf("Division: %d / %d = %.if, and Modulo: %d%%%d=%d\n",a,b,(float)a/b,a,b,a%b);
return 0;

}
