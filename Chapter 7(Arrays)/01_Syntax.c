#include <stdio.h>

int main(){
    int marks[100];  // It reserve space to store 100 integers {0 --> 99}.
    marks[0]= 90;
    marks[1]= 89;
    marks[2]= 99;

    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);
    printf("%d\n", marks[2]);
    return 0;
}