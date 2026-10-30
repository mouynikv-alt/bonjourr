#include<stdio.h>

int main(){
    int mb,gb;


    printf("how many MB? ");
    scanf("%d", &mb);

    gb= mb/ 1024 ;

    printf("%d MBis equal to %d GB.\n", mb,gb);

    return 0;
}
