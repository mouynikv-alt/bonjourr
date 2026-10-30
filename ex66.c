#include<stdio.h>

int main(){
    char name[50];
    int year_of_birth, age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);

    age = 2024 -year_of_birth;

    printf("Name: %s\n", name);
    printf("Year of birth: %d\n", year_of_birth);
    printf("Age: %d\n", age);

    return 0;
}
