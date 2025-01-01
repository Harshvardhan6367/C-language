#include <stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("Harsh.txt", "a");
    int num = 24567788;

    fprintf(fptr,"\nThe number is %d", num);

    fclose(fptr);
    return 0;
}