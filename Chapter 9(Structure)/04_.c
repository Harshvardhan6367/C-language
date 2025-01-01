#include <stdio.h>
#include <string.h>
struct students{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct students harsh = {"Harsh", 2024, 9.5};

    printf("%s  %d  %.2f \n", harsh.name, harsh.roll, harsh.cgpa);
    
    
    return 0;
}