#include <stdio.h>

int main(){
    // int a = 4;
    // int *ptr = &a;
    // printf("Adrress of a is %u\n", ptr);

    // ptr++;
    // printf("Adrress of a is %u\n", ptr);

    char a = 'A';
    char *ptr = &a;
    printf("Adrress of a is %u\n", ptr);

    ptr++;
    printf("Adrress of a is %u\n", ptr);

    return 0;
}