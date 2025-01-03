//Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("05_problem.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    fclose(fptr);

    fptr = fopen("05_problem.txt", "w");

    int print;
    print = num *2;

    fprintf(fptr, "%d", print);

    fclose(fptr);
    
    return 0;
}