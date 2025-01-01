#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Harsh.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("The value of num is %d\n", num);
    
    fscanf(fptr, "%d", &num);
    printf("The value of num is %d\n", num);
    return 0;
}