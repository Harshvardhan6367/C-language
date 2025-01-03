// Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.

#include <stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("02_Problem.txt", "w");
    int table;
    int n = 5;
    for (int  i = 0; i < 10; i++)
    {
        
        fprintf(fptr ,"%d X %d = %d \n", n, (i+1), n * (i+1));
        
    }
        fclose(fptr);

    return 0;
}