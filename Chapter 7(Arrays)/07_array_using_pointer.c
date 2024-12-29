#include <stdio.h>

int main(){
    int marks[] = {67, 98, 56, 95};
    
     int *ptr = &marks[0];        // ---->This is also written as .. 'int* ptr = marks;'

     for (int i = 0; i < 4; i++)
     {
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
     }
     
    return 0;
}