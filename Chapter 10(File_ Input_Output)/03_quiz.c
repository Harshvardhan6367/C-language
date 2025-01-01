#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("8Harsh.txt", "r");

    if(fptr == NULL){
        printf("The file does not exist \n");
        
    }else
    {
    int num;
    fscanf(fptr, "%d", &num);
    printf("The value of num is %d\n", num);
    }
    fclose(fptr);
    return 0;
}