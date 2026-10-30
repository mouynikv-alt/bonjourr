#include<stdio.h>

int main(){
    int width, height;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);

    printf("Surface of a rectangle: %d\n", width*height);

    return 0;
}
