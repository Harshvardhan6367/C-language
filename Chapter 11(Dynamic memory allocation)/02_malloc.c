// Write a program to create a dynamic array of 5 floats using malloc().
#include <stdio.h>
#include<stdlib.h>

int main(){
    float n = 5;
    float *ptr;
    ptr = (float*) malloc(n * sizeof(float));

    ptr[0] = 67.8;
    ptr[1] = 89.87;
    ptr[2] = 68.90;
    ptr[3] = 58.65;
    ptr[4] = 46.45;

    printf("%.2f \n", ptr[0]);
    printf("%.2f \n", ptr[1]);
    printf("%.2f \n", ptr[2]);
    printf("%.2f \n", ptr[3]);
    printf("%.2f \n", ptr[4]);
    

    return 0;
}