#include <stdio.h>

 int factorial(int);

 int factorial(int n){
    if (n == 1 || n == 0)
    {
        return 1;
    }
     
     //factorial(n) = factorial(n-1) x n 
     return factorial(n-1) * n;
 } 


int main(){
    int a = 8 ;
    printf("The factrial of %d is %d", a, factorial(a));
    return 0;
}