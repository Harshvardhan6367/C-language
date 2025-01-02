#include <stdio.h>

int main(){
    char st[] = "Harsh";

    char *ptr = "Harsh";                     //A string defined using pointers can be reinitialized.
    ptr = "Anna";

    puts(st);
    puts(ptr);
    return 0;
}