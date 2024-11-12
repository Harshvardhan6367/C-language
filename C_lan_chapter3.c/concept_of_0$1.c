#include <stdio.h>
int main(){
    int a=1; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);

    return 0;
}






#include <stdio.h>

int main(){
    int c=0; int d=1;
    printf("The value of c and d is %d\n", c&&d);
    printf("The value of c or d is %d\n", c||d);

    return 0;
}






#include <stdio.h>

int main(){
    int e=1; int f=0;
    printf("The value of e and f is %d\n", e&&f);
    printf("The value of e or f is %d\n", e||f);

    return 0;
}






#include <stdio.h>

int main(){
    int g=0; int h=0;
    printf("The value of g and h is %d\n", g&&h);
    printf("The value of g or h is %d\n", g||h);

    return 0;
}










#include <stdio.h>

int main(){
    int a=1; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if(a&&b){
        printf("both are true\n");
    }

    //is also written as...

    if(a){
        if(b){
            printf("both are true\n");
        }
    }
    return 0;
}

