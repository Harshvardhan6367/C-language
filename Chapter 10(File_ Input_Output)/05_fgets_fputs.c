#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Harsh.txt", "w");

    // char c = fgetc(fptr);
    // printf("%c", c);          // to read from file.

    fputc('c', fptr);            // to write on file.

    fclose(fptr);
    return 0;
}