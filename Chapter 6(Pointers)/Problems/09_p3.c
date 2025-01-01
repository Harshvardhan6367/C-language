//Write a program to change the value of a variable to ten times of its current value.
#include <stdio.h>
void Ten_times(int* a);

int main(){
    int n;
    printf("Enter value :");
    scanf("%d", &n);

    printf("%d\n", n);    

    Ten_times(&n);        // Call by refrence change the value of n.
    printf("%d\n", n);

    return 0;
}

void Ten_times(int* a){
    *a = *a * 10;
}