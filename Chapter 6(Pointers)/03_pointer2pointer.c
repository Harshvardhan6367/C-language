#include <stdio.h>

int main(){
    int i =76;
    int* j = &i;
    int** k = &j;
     
    // *&  ---> kaat jate hai like division

    printf("value of i is %d\n", i);
    printf("value of i is %d\n", *(&i));
    printf("value of i is %d\n", **(&j));   // here one * is cancel out with &. remains *(j)  .
    printf("value of i is %d\n", **k);
    
    return 0;
}