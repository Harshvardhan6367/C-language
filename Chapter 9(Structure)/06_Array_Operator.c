#include <stdio.h>
#include <string.h>
struct students{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct students s1;
    struct students *ptr;
    ptr = &s1;

    s1.cgpa = 5.7;

    printf("%.2f \n", ptr->cgpa);      //Instead is writing '(*ptr).cgpa' we can write 'ptr->cgpa.'
    return 0;
}