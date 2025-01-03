//Write a program to read three integers from a file.

#include <stdio.h>

int main(){
    FILE *fptr ;
    fptr = fopen("01_problem.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);

    printf("%d", num);
    fclose(fptr);
    return 0;
}