//Use the array in problem 1 to store 6 integers entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 6;
    int *ptr = &num;
    ptr = (int*) malloc(num*sizeof(int));

    scanf("%d %d %d %d %d %d", &ptr[0], &ptr[1], &ptr[2], &ptr[3], &ptr[4], &ptr[5]);
    printf(" \n");
    

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);

    fclose(ptr);
    return 0;
}