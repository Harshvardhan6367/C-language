//Write a program to decrypt the string encrypted using encrypt function in problem 6.

#include <stdio.h>

int main(){
     char broCode[] = "Csp!dpef!jt!BBK!HBEJ!UFSB!CIBJ!DIBMBZHB";
    for (int i = 0; i < strlen(broCode); i++)
    {
          broCode[i] = broCode[i] - 1;
    }
    printf("%s", broCode);
    return 0;
}