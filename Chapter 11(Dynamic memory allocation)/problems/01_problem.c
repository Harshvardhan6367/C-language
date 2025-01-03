// Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 6;
    int *ptr = &num;
    ptr = (int*) malloc(num*sizeof(int));

    ptr[0] = 24;
    ptr[1] = 673;
    ptr[2] = 45;
    ptr[3] = 78;
    ptr[4] = 36;
    ptr[5] = 94;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);

    fclose(ptr);
    return 0;
}