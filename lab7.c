#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char first_name[50];
    char last_name[50];
    char username[50];
    int n1,n2;
    char a,b;
    printf("Input:\n");
    printf("Enter your first name:");
    scanf("%s", &first_name);
    printf("Enter your last name:");
    scanf("%s", &last_name);
    printf("\nOutput:\n");
    strlwr(first_name);
    strlwr(last_name);
    strcpy(username,first_name);
    strcat(username,"_");
    strcat(username,last_name);
    printf("\nA.Concatenation between first name and last name is%s\n",username);
    n1 = strlen(first_name);
    n2 = strlen(last_name);
    printf("\nB.Total characters of first name is %d",n1);
    printf(" and total chararcters of last name is %d\n",n2);
    a = toupper(last_name[0]);
    b = first_name[(strlen(first_name)-1)];
    printf("\nC.First character of last name is:%c",a);
    printf(" and the last character of the name is %c.\n\n",b);

    return 0;
}
