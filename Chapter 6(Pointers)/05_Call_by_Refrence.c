#include <stdio.h>
int sum(int* a, int* b);


int main(){
    int x=1, y=6;
    printf("The value of sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}

//Sum should change the value of x.
int sum(int* a, int* b){
    *a = 6;
    return *a+ *b;
}