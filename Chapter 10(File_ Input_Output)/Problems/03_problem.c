// Write a program to read a text file character by character and write its content twice in separate file.

#include <stdio.h>
#include <string.h>

int main(){
    FILE* fptr;
    fptr = fopen("03_problem.txt", "w");

    char ch[100] = "Harsh vardhan";
    for (int i = 0; i < strlen(ch); i++)
    {
    fprintf(fptr, "%c", ch[i]);
        /* code */
    }
        fclose(fptr);

    return 0;
}