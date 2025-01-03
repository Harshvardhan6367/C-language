/*
        Take name and salary of two employees as input from the user and write them to 
        a text file in the following format:
        i. Name1, 3300
        ii. Name2, 7700

*/
#include <stdio.h>
#include <string.h>
typedef struct detail{
    int salary;
    char name[];
}st;
int main(){
    st s1, s2;
    s1.salary = 3300;
    s2.salary = 7700;
    strcpy(s1.name, "Name1") ;
    strcpy(s2.name, "Name2") ;

    FILE *fptr;
    fptr = fopen("04_problem.txt", "w");

    fprintf(fptr, "%s\t", s1.name);
    fprintf(fptr, "%d\n", s1.salary);
    fprintf(fptr, "%s\t", s2.name);
    fprintf(fptr, "%d\n", s2.salary);
    fclose(fptr);

    return 0;
}