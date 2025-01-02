//Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
//The vectors must be two–dimensional.
#include <stdio.h>
struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1,v2;
    v1.x = 3;
    v1.y = 4;
    v2.x = 9;
    v2.y = 90;

    printf("The resulting vector is : %di +%dj \n", v1.x + v2.x, v1.y + v2.y);   
    return 0;
}