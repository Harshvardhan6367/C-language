#include <stdio.h>
#include<string.h>
struct student{
    char name[40];
    int bunks;
    float marks;
};
int main(){
    struct student e1, e2, e3;
    e1.bunks = 23;
    e1.marks = 74.90;
    strcpy(e1.name, "Dev");
    
    e2.bunks = 56;
    e2.marks = 45.56;
    strcpy(e2.name, "Durlab");

    e3.bunks = 70;
    e1.marks = 23.45;
    strcpy(e3.name, "Dushant");

    printf("%s  %.2f  %d \n", e1.name, e1.marks, e1.bunks);
    printf("%s  %.2f  %d \n", e2.name, e2.marks, e2.bunks);
    printf("%s  %.2f  %d \n", e3.name, e3.marks, e3.bunks);
    
    return 0;
}