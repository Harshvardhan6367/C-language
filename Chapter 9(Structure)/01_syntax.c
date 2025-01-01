#include <stdio.h>
#include<string.h>
struct student{
    char name[40];
    int bunks;
    float marks;
};
int main(){
    struct student e1, e2;
    e1.bunks = 23;
    e1.marks = 74.90;
    strcpy(e1.name, "Dev");

    printf("%s  %.2f  %d \n", e1.name, e1.marks, e1.bunks);
    
    return 0;
}