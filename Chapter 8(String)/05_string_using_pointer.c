#include <stdio.h>

int main(){
    char st[] = "Harsh";

    char *ptr = "Harsh";
    ptr = "Anna";

    puts(st);
    puts(ptr);
    return 0;
}