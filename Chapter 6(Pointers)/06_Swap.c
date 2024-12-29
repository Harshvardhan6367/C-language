#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *b = *a;
    *b =temp;

}

int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("value of a is %d and value of b is %d", a, b);
    return 0;
}