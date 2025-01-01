// Write a program to print the value of a variable i by using “pointer to pointer” type of variable


#include <stdio.h>

int main(){
    int i = 77;
    int *j = &i;
    int **k = &j;

    printf("The value if i is %d\n", **k);
    printf("The value if i is %d\n", i);
    printf("The value if i is %d\n", *j);
    printf("The value if i is %d\n", **(&j));
    
    return 0;
}