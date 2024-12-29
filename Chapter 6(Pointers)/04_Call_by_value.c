#include <stdio.h>
int sum(int a, int b);


int main(){
    printf("The value of sum of 1 and 6 is %d", sum(1,6));
    return 0;
}
int sum(int a, int b){
    a = 6;                       //Call by value can not change the value because copy of 1, 6 are provided to sum in a, b.
    return a+b;
}