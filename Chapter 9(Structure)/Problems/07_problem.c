//Write problem 5’s structure using ‘typedef’ keywords.

#include <stdio.h>
typedef struct complexNo{
    int real;
    int imaginagy;
}cmp;
int main(){
    cmp c1;
    c1.real = 5;
    c1.imaginagy = 3;
    printf("%d+i%d \n", c1.real, c1.imaginagy);
    

    return 0;
}