//. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address.
// Are these addresses same? Why?
#include <stdio.h>
void printAddress(int* a);

int main(){
    int i = 109;
    int *a = &i;
    printf("The address of i is %u\n", &i);

    printAddress(a);
    return 0;
}
void printAddress(int* a){
    printf("The value of a is %d\n", a);
    printf("The value at a is %d\n", *a);

}
