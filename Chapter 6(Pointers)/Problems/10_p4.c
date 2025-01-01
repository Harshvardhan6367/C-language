//Write a program using a function which calculates the sum and average of two numbers. 
//Use pointers and print the values of sum and average in main().


// #include <stdio.h>
                                                       //This is also correct.
// void sum(int a, int b);
// void average(int a, int b);

// int main(){
//     int x = 3;
//     int y = 7;

//     sum(x, y);
//     average(x, y);
//     return 0;
// }

// void sum(int a, int b){
//     int s = a + b;
//     int *j = &s;
//     printf("Sum is %d\n", s);
//     printf("Address of sum is %p\n", &s);
// }

// void average(int a, int b){
//     float avg = (a + b) / 2.0;
//     float *i = &avg;
//     printf("Average is %f\n", avg);
//     printf("Address if average is %p\n", &avg);
// }





//Code of harry
#include <stdio.h>


int* sum(int a, int b){
    int s = a+b;
    int* ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;
}

float* average(int a, int b){
    float avg =  (a+b)/2.0;
    float * ptr = &avg;
    printf("The average is %f\n", avg);
    return ptr;
}

int main(){
    int x = 4; 
    int y = 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = average(x,y);

    printf("The address of sum is %u and of average is %u", ptr1, ptr2 );

    return 0;
}