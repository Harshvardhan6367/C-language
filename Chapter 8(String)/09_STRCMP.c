#include <stdio.h>
#include <string.h>

int main(){
    int a = strcmp("far", "joke"); // Negative value  cuz ascii value of 'f' is is greater then ascii of 'j'...
    int b = strcmp("joke", "far"); // Positive value

    printf("%d \n", a);
    printf("%d \n", b);
    
    return 0;
}