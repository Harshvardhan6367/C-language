// Create an array of 5 complex numbers created in Problem 5 and
// display them with the help of a display function. The values must be taken as an input from the user.

#include <stdio.h>
struct complexNo{
    int real;
    int imaginagy;
};
int main(){
    struct complexNo c1, c2, c3, c4, c5;
    printf("Enter the real and imaginary of complex no :");
    scanf("%d %d", &c1.real, &c1.imaginagy);
    printf("Enter the real and imaginary of complex no :");
    scanf("%d %d", &c2.real, &c2.imaginagy);
    printf("Enter the real and imaginary of complex no :");
    scanf("%d %d", &c3.real, &c3.imaginagy);
    printf("Enter the real and imaginary of complex no :");
    scanf("%d %d", &c4.real, &c4.imaginagy);
    printf("Enter the real and imaginary of complex no :");
    scanf("%d %d", &c5.real, &c5.imaginagy);
    

    printf("%d+i%d \n", c1.real, c1.imaginagy);
    printf("%d+i%d \n", c2.real, c2.imaginagy);
    printf("%d+i%d \n", c3.real, c3.imaginagy);
    printf("%d+i%d \n", c4.real, c4.imaginagy);
    printf("%d+i%d \n", c5.real, c5.imaginagy);
    return 0;
}