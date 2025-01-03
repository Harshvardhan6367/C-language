//Attempt problem 4 using calloc().

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *ptr;

    ptr = (int*) calloc(n, sizeof(int));
    ptr[0] = 24;
    ptr[1] = 673;
    ptr[2] = 45;
    ptr[3] = 78;
    ptr[4] = 36;
    

    ptr = (int*) realloc(ptr, 10* sizeof(int));
    ptr[0] = 24;
    ptr[1] = 673;
    ptr[2] = 45;
    ptr[3] = 78;
    ptr[4] = 36;
    ptr[5] = 97;
    ptr[5] = 234;
    ptr[5] = 65;
    ptr[5] = 92;
    ptr[5] = 643;

    fclose(ptr);
    return 0;
}