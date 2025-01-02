//Write a program to illustrate the use of arrow operator → in C.

#include <stdio.h>
#include <string.h>
struct myemotions{
    int desire;
    char Mylove[100];
    float expectation;
};
int main(){
    struct myemotions e1;
    struct myemotions *ptr;
    ptr = &e1;
    e1.desire = 1000;
    e1.expectation = 0.000;
    strcpy(e1.Mylove, "India");

    printf("%d\t", ptr->desire);
    printf("%.2f\t", ptr->expectation);
    printf("%s\t", ptr->Mylove);
    return 0;
}