//Try problem 3 using call by value and verify that it does not change the value of the said variable. 
#include <stdio.h>
void Ten_times(int a);

int main(){
    int n;
    printf("Enter value :");
    scanf("%d", &n);

    printf("%d\n", n);    

    Ten_times(n);        // Call by value does not change the value of n.
    printf("%d\n", n);

    return 0;
}

void Ten_times(int a){
    a = a * 10;
}