#include <stdio.h>

    int main(){
        
    int marks[5];

    printf("Enter marks :");
    scanf("%d", &marks[0]);
    printf("Enter marks :");
    scanf("%d", &marks[1]);
    printf("Enter marks :");
    scanf("%d", &marks[2]);
    printf("Enter marks :");
    scanf("%d", &marks[3]);
    printf("Enter marks :");
    scanf("%d", &marks[4]);


    printf("The student marks is %d\n", marks[1]);
    printf("The student marks is %d\n", marks[0]);
    printf("The student marks is %d\n", marks[2]);
    printf("The student marks is %d\n", marks[3]);
    printf("The student marks is %d\n", marks[4]);
    return 0;
}