#include<stdio.h>

int main(){
    float dollars;
    int riels;

    printf("+++++++++++++++++++++++++\n");
    printf("\t EXCHANGE RATE USD-RIEL PROGRAM\n");
    printf("+++++++++++++++++++++++++++++\n\n");
    while(1){


    printf("how many dollar? ");
    scanf("%f", &dollars);

    riels= dollars * 4000;

    printf("%.2f $ is equal to %d riel.\n", dollars,riels);
    }
    return 0;
}
