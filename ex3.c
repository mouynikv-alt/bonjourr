#include<stdio.h>
int main(){
    char name [50];
    char gender;
    int age;
    printf("INPUT:\n");
    printf("Enter your name: ");
    scanf("%s",name);

    printf("Enter your gender(M/F): ");
    scanf("%c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("OUTPUT:\n");
    printf("Welcome to AMS %s,%c,%d\n", name,gender,age);

    return 0;



}
