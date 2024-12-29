#include <stdio.h>

int main(){
    char i= 'a';
    char* j = &i; // j is a pointer pointing to i(j is a character pointer)

    float k = 56.786;
    float* k1 = &k;

    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of i is %u\n", &k);
    return 0;
}