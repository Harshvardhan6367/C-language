#include <stdio.h>

// function prototype
int sum(int , int);

// function defination
int sum(int x ,int y){
     printf("the sum is %d\n", x+y);    
    return x+y;
}

int main(){
    int a=3 , b=7, c=3, d=34, e=78 ;


    int c11 = sum(a,b);    //function call
    printf("%d\n", c11);



    sum(a,d);
    sum(a,c);              //function call
    sum(a,e);
    sum(e,d);
    sum(b,c);
    sum(e,d);
    sum(a,b);
    sum(e,d);
    sum(c,c);
    return 0;
}