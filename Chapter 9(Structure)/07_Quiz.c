#include <stdio.h>
#include <string.h>
struct students{
    char name[100];
    int roll;
    float cgpa;
};

void PrintDetail(struct students s1);

int main(){
    struct students s1;
    s1.roll = 5474;
    s1.cgpa = 9.8;
    strcpy(s1.name, "Komal");
    PrintDetail(s1);
    return 0;
}

void PrintDetail(struct students s1){
    

    printf("%d  %.2f   %s \n", s1.roll, s1.cgpa, s1.name);
    
}