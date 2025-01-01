#include <stdio.h>
#include <string.h>
typedef struct students{
    char name[100];
    int roll;
    float cgpa;
}stu;                     //Now students is rename as 'stu' ....
int main(){
    stu s1;
    stu *ptr1;
    ptr1 = &s1;
    s1.roll = 5474;
    s1.cgpa = 9.8;
    strcpy(s1.name, "Komal");

    printf("%d  %.2f   %s \n", s1.roll, s1.cgpa, s1.name);
    printf("%d  %.2f   %s \n", ptr1->roll, ptr1->cgpa, ptr1->name);

    return 0;
}