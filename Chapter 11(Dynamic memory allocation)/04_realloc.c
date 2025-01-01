#include <stdio.h>

int main(){
    int n ;
    int *ptr;
    scanf("%d", n);
    ptr = (int*) malloc(n * sizeof(int));

    ptr[0]= 34;
    printf("%d \n", ptr[0]);
    
    free(ptr);

    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    return 0;
}