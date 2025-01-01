#include <stdio.h>
#include <string.h>
struct students{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct students SecB[100];  // Array of structure.
    //we can access data using :
    SecB[0].roll = 1234;
    SecB[1].roll = 5678;
    SecB[3].roll = 7975;

    printf("%d \n", SecB[0].roll);
    
    return 0;
}