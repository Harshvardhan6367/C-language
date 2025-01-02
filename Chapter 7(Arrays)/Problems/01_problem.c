/*
    Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element
    where ptr is a pointer pointing to the first element of the array.
*/

#include <stdio.h>

int main(){
    int Arr[10] = {23, 657, 887, 998, 98, 877, 89, 86, 43, 769};
    int *ptr = &Arr[0];

    printf("The third element is %d", *(ptr+2));
    return 0;
}